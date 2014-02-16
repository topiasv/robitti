#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include <stdio.h>



void main(void)
{
    BYTE status;                         // I2C communication status
  
 I2Cm_Start();                        // Initialize I2C Master interface

    status = I2Cm_fReadBytes(0xD1,rxBuf,7,I2Cm_RepStart );

 I2CM_Stop();
	
	LCD_Position(1,3);
	LCD_PrString(*status);
	
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

