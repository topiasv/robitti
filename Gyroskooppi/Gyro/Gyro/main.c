//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include <stdio.h>
#include <stdlib.h>

//Define all Gyroscope registers

//#define MPU6050_ADDRESS 0b11010010 // Address with end write bit
#define MPU6050_ADDRESS 0x69 //GY-521 address
#define MPU6050_RA_XG_OFFS_TC 0x00 //[7] PWR_MODE, [6:1] XG_OFFS_TC, [0] OTP_BNK_VLD
#define MPU6050_RA_YG_OFFS_TC 0x01 //[7] PWR_MODE, [6:1] YG_OFFS_TC, [0] OTP_BNK_VLD
#define MPU6050_RA_ZG_OFFS_TC 0x02 //[7] PWR_MODE, [6:1] ZG_OFFS_TC, [0] OTP_BNK_VLD
#define MPU6050_RA_X_FINE_GAIN 0x03 //[7:0] X_FINE_GAIN
#define MPU6050_RA_Y_FINE_GAIN 0x04 //[7:0] Y_FINE_GAIN
#define MPU6050_RA_Z_FINE_GAIN 0x05 //[7:0] Z_FINE_GAIN
#define MPU6050_RA_XA_OFFS_H 0x06 //[15:0] XA_OFFS
#define MPU6050_RA_XA_OFFS_L_TC 0x07
#define MPU6050_RA_YA_OFFS_H 0x08 //[15:0] YA_OFFS
#define MPU6050_RA_YA_OFFS_L_TC 0x09
#define MPU6050_RA_ZA_OFFS_H 0x0A //[15:0] ZA_OFFS
#define MPU6050_RA_ZA_OFFS_L_TC 0x0B
#define MPU6050_RA_XG_OFFS_USRH 0x13 //[15:0] XG_OFFS_USR
#define MPU6050_RA_XG_OFFS_USRL 0x14
#define MPU6050_RA_YG_OFFS_USRH 0x15 //[15:0] YG_OFFS_USR
#define MPU6050_RA_YG_OFFS_USRL 0x16
#define MPU6050_RA_ZG_OFFS_USRH 0x17 //[15:0] ZG_OFFS_USR
#define MPU6050_RA_ZG_OFFS_USRL 0x18
#define MPU6050_RA_SMPLRT_DIV 0x19
#define MPU6050_RA_CONFIG 0x1A
#define MPU6050_RA_GYRO_CONFIG 0x1B
#define MPU6050_RA_ACCEL_CONFIG 0x1C
#define MPU6050_RA_FF_THR 0x1D
#define MPU6050_RA_FF_DUR 0x1E
#define MPU6050_RA_MOT_THR 0x1F
#define MPU6050_RA_MOT_DUR 0x20
#define MPU6050_RA_ZRMOT_THR 0x21
#define MPU6050_RA_ZRMOT_DUR 0x22
#define MPU6050_RA_FIFO_EN 0x23
#define MPU6050_RA_I2C_MST_CTRL 0x24
#define MPU6050_RA_I2C_SLV0_ADDR 0x25
#define MPU6050_RA_I2C_SLV0_REG 0x26
#define MPU6050_RA_I2C_SLV0_CTRL 0x27
#define MPU6050_RA_I2C_SLV1_ADDR 0x28
#define MPU6050_RA_I2C_SLV1_REG 0x29
#define MPU6050_RA_I2C_SLV1_CTRL 0x2A
#define MPU6050_RA_I2C_SLV2_ADDR 0x2B
#define MPU6050_RA_I2C_SLV2_REG 0x2C
#define MPU6050_RA_I2C_SLV2_CTRL 0x2D
#define MPU6050_RA_I2C_SLV3_ADDR 0x2E
#define MPU6050_RA_I2C_SLV3_REG 0x2F
#define MPU6050_RA_I2C_SLV3_CTRL 0x30
#define MPU6050_RA_I2C_SLV4_ADDR 0x31
#define MPU6050_RA_I2C_SLV4_REG 0x32
#define MPU6050_RA_I2C_SLV4_DO 0x33
#define MPU6050_RA_I2C_SLV4_CTRL 0x34
#define MPU6050_RA_I2C_SLV4_DI 0x35
#define MPU6050_RA_I2C_MST_STATUS 0x36
#define MPU6050_RA_INT_PIN_CFG 0x37
#define MPU6050_RA_INT_ENABLE 0x38
#define MPU6050_RA_DMP_INT_STATUS 0x39
#define MPU6050_RA_INT_STATUS 0x3A
#define MPU6050_RA_ACCEL_XOUT_H 0x3B
#define MPU6050_RA_ACCEL_XOUT_L 0x3C
#define MPU6050_RA_ACCEL_YOUT_H 0x3D
#define MPU6050_RA_ACCEL_YOUT_L 0x3E
#define MPU6050_RA_ACCEL_ZOUT_H 0x3F
#define MPU6050_RA_ACCEL_ZOUT_L 0x40
#define MPU6050_RA_TEMP_OUT_H 0x41
#define MPU6050_RA_TEMP_OUT_L 0x42
#define MPU6050_RA_GYRO_XOUT_H 0x43
#define MPU6050_RA_GYRO_XOUT_L 0x44
#define MPU6050_RA_GYRO_YOUT_H 0x45
#define MPU6050_RA_GYRO_YOUT_L 0x46
#define MPU6050_RA_GYRO_ZOUT_H 0x47
#define MPU6050_RA_GYRO_ZOUT_L 0x48
#define MPU6050_RA_EXT_SENS_DATA_00 0x49
#define MPU6050_RA_EXT_SENS_DATA_01 0x4A
#define MPU6050_RA_EXT_SENS_DATA_02 0x4B
#define MPU6050_RA_EXT_SENS_DATA_03 0x4C
#define MPU6050_RA_EXT_SENS_DATA_04 0x4D
#define MPU6050_RA_EXT_SENS_DATA_05 0x4E
#define MPU6050_RA_EXT_SENS_DATA_06 0x4F
#define MPU6050_RA_EXT_SENS_DATA_07 0x50
#define MPU6050_RA_EXT_SENS_DATA_08 0x51
#define MPU6050_RA_EXT_SENS_DATA_09 0x52
#define MPU6050_RA_EXT_SENS_DATA_10 0x53
#define MPU6050_RA_EXT_SENS_DATA_11 0x54
#define MPU6050_RA_EXT_SENS_DATA_12 0x55
#define MPU6050_RA_EXT_SENS_DATA_13 0x56
#define MPU6050_RA_EXT_SENS_DATA_14 0x57
#define MPU6050_RA_EXT_SENS_DATA_15 0x58
#define MPU6050_RA_EXT_SENS_DATA_16 0x59
#define MPU6050_RA_EXT_SENS_DATA_17 0x5A
#define MPU6050_RA_EXT_SENS_DATA_18 0x5B
#define MPU6050_RA_EXT_SENS_DATA_19 0x5C
#define MPU6050_RA_EXT_SENS_DATA_20 0x5D
#define MPU6050_RA_EXT_SENS_DATA_21 0x5E
#define MPU6050_RA_EXT_SENS_DATA_22 0x5F
#define MPU6050_RA_EXT_SENS_DATA_23 0x60
#define MPU6050_RA_MOT_DETECT_STATUS 0x61
#define MPU6050_RA_I2C_SLV0_DO 0x63
#define MPU6050_RA_I2C_SLV1_DO 0x64
#define MPU6050_RA_I2C_SLV2_DO 0x65
#define MPU6050_RA_I2C_SLV3_DO 0x66
#define MPU6050_RA_I2C_MST_DELAY_CTRL 0x67
#define MPU6050_RA_SIGNAL_PATH_RESET 0x68
#define MPU6050_RA_MOT_DETECT_CTRL 0x69
#define MPU6050_RA_USER_CTRL 0x6A
#define MPU6050_RA_PWR_MGMT_1 0x6B
#define MPU6050_RA_PWR_MGMT_2 0x6C
#define MPU6050_RA_BANK_SEL 0x6D
#define MPU6050_RA_MEM_START_ADDR 0x6E
#define MPU6050_RA_MEM_R_W 0x6F
#define MPU6050_RA_DMP_CFG_1 0x70
#define MPU6050_RA_DMP_CFG_2 0x71
#define MPU6050_RA_FIFO_COUNTH 0x72
#define MPU6050_RA_FIFO_COUNTL 0x73
#define MPU6050_RA_FIFO_R_W 0x74
#define MPU6050_RA_WHO_AM_I 0x75

/* TESTI
	void echo (void)
{
Counter16_Stop;
timervalue=Counter16_wReadCounter();
timervalue=0xffff-timervalue;
time=timervalue*10.66;
distance=(time/54.6)-1;
Counter16_WritePeriod(0xffff);
Counter16_Start;
}
*/
/*
	void trigger (void)
{
	// TRIGGERIN YKSI PULSSI
	TRIGG_Start();
	TRIGG_Switch(1);
	  for (i=0;i<4;i++); //n. 10us
	TRIGG_Switch(0);
}*/
	
void readSlave(int slaveAddr, int slaveReg, int bytes, BYTE *masterReg);

/*i2c read. Choose address to read from, register to read from, how many bytes to read 
and register to write on master
*/
void readSlave(int slaveAddr, int slaveReg, int bytes, BYTE *masterReg) {
	
	int i;
	
	//master:start
	//master:slaveaddr+write
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("S,AD+W");
	GYRO_fSendStart(slaveAddr, GYRO_WRITE);	
	
	//slave:ack
	//master:register address (whoami 0x75)
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("RA");
	GYRO_fWrite(slaveReg);
	
	//master:sendrepeatstart
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("S,AD+R");
	GYRO_fSendRepeatStart(slaveAddr, GYRO_READ);
	
	//master:slaveaddr+read
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("READ DATA");
	for (i = 0; i < bytes; i++) {
		masterReg[i] = GYRO_bRead(GYRO_ACKslave);
	}
	
	//slave:ack
	//slave:data
	//master:nack
	masterReg[bytes] = GYRO_bRead(GYRO_NAKslave);
	
	//master:stop
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("P");
	GYRO_SendStop();
	
	LCD_Position(1,0);            // Place LCD cursor at row 1, column 0
	for (i = 0; i <= bytes; i++) {
		LCD_PrHexByte(masterReg[i]);        //Tulosta rxbuf
	}
}


void main(void)
{
	BYTE status;
	BYTE rxBuf[16];
	int asdf;
	char str[16];
	int y;
	
	int i;
	char theStr1[] = "Gyroskooppi";
	char theStr2[] = "Eteen!     ";
	char theStr3[] = "Taakse!    ";
	char theStr4[] = "SEIS!      ";
	char theStr5[] = "Oikealle!  ";
	char theStr6[] = "Vasemmalle!";	
	
	LCD_Start();
	LCD_Position(0,3);
	LCD_PrString(theStr1);
	
	readSlave(0x48, 0x0, 1, rxBuf);
	//readSlave(MPU6050_ADDRESS, 0x75, 2, rxBuf);
	
	/*
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	
	LCD_Position(0,0);
	LCD_PrCString("BeforeGyro");
	
	//GYRO_Start();
	GYRO_fSendStart(0x48,GYRO_WRITE);
	
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("WriteSequence");
	
	//rxBuf[0] = MPU6050_RA_WHO_AM_I;
	
	//GYRO_bWriteBytes(0x69,rxBuf,1,GYRO_NoStop);
	//GYRO_fWrite(*rxBuf);
	
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(0,0);
	LCD_PrCString("InGyro");
	
	status = GYRO_fReadBytes(0x69,rxBuf,2,GYRO_CompleteXfer);
	//GYRO_bRead(GYRO_NAKslave);
	
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	LCD_Position(5,0);
	//LCD_PrCString("InGyroAgain");
	LCD_PrHexByte(status);
	
	//GYRO_SendStop();
	
	/*
	for (i = 0; i < 16; i++) {
		if (i > 0) cprintf(":");
		cprintf("%02X", rxBuf[i]);
	}*/
	
	LCD_Position(0,0);
	LCD_PrCString("                 ");
	/*
	for (i = 0; i < 1000; i++) {
		LCD_Position(0,0);
		LCD_PrCString("AfterGyro");
		//LCD_PrHexInt(i);
	}*/
	
	/*
	//LCD_Start();                  // LCD käynttöönotto
	LCD_Position(1,0);            // Place LCD cursor at row 0, col 5.
	for (i = 0; i < 8; i++) {
		LCD_PrHexByte(rxBuf[i]);        //Tulosta rxbuf
	}
	//LCD_PrString(str);
	/*
	
	//Ohjaimien starttaukset..
	VME_Start();
	OME_Start();
	VMT_Start();
	OMT_Start();
	
	//Eteenpäin
	VME_Switch(1);         // Turn on VasenMoottoriEteen
	OME_Switch(1);         // Turn on OikeaMoottoriEteen
	
	LCD_Position(1,3);
	LCD_PrString(theStr2);         //Tulosta teksti 2
	
	for (i=0;i<30000;i++);
	VME_Switch(0);		  // Turn off VasenMoottoriEteen
	OME_Switch(0); 		  // Turn off OikeaMoottoriEteen
	
	for (i=0;i<30000;i++); //Tauko välissä
	LCD_Position(1,3);
	LCD_PrString(theStr4);         //Tulosta teksti 4
	
	//Taaksepäin
	VMT_Switch(1);         // Turn on VasenMoottoriTaakse
	OMT_Switch(1);         // Turn on OikeaMoottoriTaakse
	
	LCD_Position(1,3);
	LCD_PrString(theStr3);         //Tulosta teksti 3
	
	for (i=0;i<30000;i++);
	VMT_Switch(0);		   // Turn off VasenMoottoriTaakse
	OMT_Switch(0);		   // Turn off OikeaMoottoriTaakse

	LCD_Position(1,3);
	LCD_PrString(theStr4);         //Tulosta teksti 4
	
	//Käännökset
		
	for (i=0;i<30000;i++);
	//Oikealle		//Varmuudeksi turn off ei käytettäville suunnille
	OME_Switch(0); 		  // Turn off OikeaMoottoriEteen
	VMT_Switch(0);		   // Turn off VasenMoottoriTaakse
	VME_Switch(1);		  // Turn on VasenMoottoriEteen
	OMT_Switch(1);		   // Turn on OikeaMoottoriTaakse
	
	LCD_Position(1,3);
	LCD_PrString(theStr5);         //Tulosta teksti 5
	
		//Ajastus 90° käännökseen, kokeilemalla...
	for (i=0;i<30000;i++);
	VME_Switch(0);		  // Turn off VasenMoottoriEteen
	OMT_Switch(0);		   // Turn off OikeaMoottoriTaakse
	
	LCD_Position(1,3);
	LCD_PrString(theStr4);         //Tulosta teksti 4
	
	for (i=0;i<30000;i++);
	//Vasemmalle  	//Varmuudeksi turn off ei käytettäville suunnille
	VME_Switch(0);		  // Turn off VasenMoottoriEteen
	OMT_Switch(0);		   // Turn off OikeaMoottoriTaakse
	OME_Switch(1); 		  // Turn on OikeaMoottoriEteen
	VMT_Switch(1);		   // Turn on VasenMoottoriTaakse
	
	LCD_Position(1,3);
	LCD_PrString(theStr6);         //Tulosta teksti 6
	
		//Ajastus 90° käännökseen, kokeilemalla...
	for (i=0;i<30000;i++);
	OME_Switch(0); 		  // Turn off OikeaMoottoriEteen
	VMT_Switch(0);		   // Turn off VasenMoottoriTaakse
	
	LCD_Position(1,3);
	LCD_PrString(theStr4);         //Tulosta teksti 4
	
	*/
	

	



	//ÄLÄ POISTA!!!
	while (1);		//ESTÄÄ MAIN:ISTA POISTUMISEN TÄRKEÄ!!! ÄLÄ POISTA!!!
	//ÄLÄ POISTA!!!
}