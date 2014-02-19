//----------------------------------------------------------------------------
// TCN75(A) I2C reading example
// 2013-11-01 Paavo Leinonen <paavo.leinonen@iki.fi>
//----------------------------------------------------------------------------

//
// Helpful documents:
//
// http://www.cypress.com/?docID=45173
// http://ww1.microchip.com/downloads/en/DeviceDoc/21935D.pdf
//

#include <stdlib.h>
#include <string.h>
#include <m8c.h>
#include "PSoCAPI.h"

volatile BYTE downcounters[1];

void SleepTimerInterrupt(void)
{
	BYTE i=sizeof(downcounters);
	volatile BYTE *ptr=downcounters;

	while (i--)
	{
		if (*ptr)
		{
			*ptr=*ptr-1;	// *ptr-- generates compiler warning
		}
		ptr++;
	}
}

#define TCN75_TO_FLOAT(x) (((float)(x))/256.)

#define TCN75_REG_TA	0x0
#define TCN75_REG_CONFIG	0x1
#define TCN75_REG_THYST	0x2
#define TCN75_REG_TSET	0x3

#define TCN75_9BIT	(0<<5)
#define TCN75_10BIT	(1<<5)
#define TCN75_11BIT	(2<<5)
#define TCN75_12BIT	(3<<5)

int tcn75_read(BYTE subaddr)
{
	union {
		BYTE buf[2];
		int value;
	} d;

	subaddr=0x48|(subaddr&0x07); // convert to 7 bit I2C address
	
	// start the module
	I2CHW_Start();
	I2CHW_EnableMstr(); 
	I2CHW_EnableInt(); 

	// configure
	d.buf[0]=TCN75_REG_CONFIG;
	d.buf[1]=TCN75_12BIT;
	I2CHW_bWriteBytes(subaddr, d.buf, 2, I2CHW_CompleteXfer);
	while(!(I2CHW_bReadI2CStatus() & I2CHW_WR_COMPLETE));
	I2CHW_ClrWrStatus();
	
	// select TA
	d.buf[0]=TCN75_REG_TA;
	I2CHW_bWriteBytes(subaddr, d.buf, 1, I2CHW_CompleteXfer);
	while(!(I2CHW_bReadI2CStatus() & I2CHW_WR_COMPLETE));
	I2CHW_ClrWrStatus();
	
	// read register
	I2CHW_fReadBytes(subaddr, d.buf, 2, I2CHW_CompleteXfer); 
	while(!(I2CHW_bReadI2CStatus() & I2CHW_RD_COMPLETE)); 
	I2CHW_ClrRdStatus();
	
	// shutdown the module
	I2CHW_DisableInt();
	I2CHW_DisableMstr();
	I2CHW_Stop();
	
	return d.value;
}


void format_temperature(char *buf, int value)
{
	int status;
	char *fbuf;
	
	fbuf=ftoa(TCN75_TO_FLOAT(value),&status);
	if (status)
	{
		cstrcpy(buf,"Error");
	}
	else
	{
		strcpy(buf,fbuf);
	}
	cstrcat(buf,"\r\n");
}


void main(void)
{
	BYTE Len;
	BYTE pData[64];
		
	M8C_EnableGInt;
	
	SleepTimer_Start();
	SleepTimer_SetInterval(SleepTimer_64_HZ); 
	SleepTimer_EnableInt();

    while(1)
    {
		format_temperature(pData,tcn75_read(0));
	
		LCD_Position(0,0);
		LCD_PrCString("                 ");
		LCD_Position(0,0);
		LCD_PrString(pData);	
    }


}
 