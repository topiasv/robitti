//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include <stdio.h>


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


void main(void)
{
	BYTE status;
	BYTE rxBuf[16];
	
	//int i, j;
	char theStr1[] = "Gyroskooppi";
	char theStr2[] = "Eteen!     ";
	char theStr3[] = "Taakse!    ";
	char theStr4[] = "SEIS!      ";
	char theStr5[] = "Oikealle!  ";
	char theStr6[] = "Vasemmalle!";
   LCD_Start();                  // LCD käynttöönotto
   LCD_Position(0,3);            // Place LCD cursor at row 0, col 5.
   LCD_PrString(theStr1);        //Tulosta teksti 1
	
	GYRO_Start();
	status = GYRO_fReadBytes(0xD1,rxBuf,15,GYRO_CompleteXfer );
	GYRO_SendStop();

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