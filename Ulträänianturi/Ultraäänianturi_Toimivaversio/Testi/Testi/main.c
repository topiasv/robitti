//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include "stdlib.h" // LCD Float test
#include "string.h" // LCD Float test

float Etaisyys(void);

//Echon määritelmät jotta pinniä voidaan lukea

// Macro to access individual bits in an IOPort
#define BITMask(BitNumber) (0x01 << BitNumber)
// Macros to access the Sonar - makes changing of the underlying hardware a lot easier
#define SonarPort PRT1DR			// Sonar is connected to Port1
#define EchoInputBit 3				// Input comes from SonarPort Pin 3
#define TestEchoInput 	(SonarPort & BITMask(EchoInputBit))

//Etäisyysfunktion timervaluen määritys
unsigned int timervalue;


//LCD PrintFloat funktio
//Ottaa sisäänsä floatin ja desimaalien määrän (n)
void LCD_PrintFloat(float NewFloat,int n)
{
int Status;
int ii=00;
char* buf;
	
	buf = ftoa(NewFloat, &Status);
	while (buf[ii])
	{
		if ('.'==buf[ii]) break;
		ii++;
	}
	buf[ii+1+n]='\0';
	LCD_Position(1,5);
	LCD_PrString(buf);
	
}

//Etäisyysfunktio
float Etaisyys(void) {
	int i;
	float MyFloat = 1.2345;
	char* buf;
	
	// TestEchoInput pitää olla määritelty koodin alussa
	
	// Trigger pulse
	TRIGG_Start();
	TRIGG_Switch(1);
	  for (i=0;i<4;i++); //n. 10us
	TRIGG_Switch(0);

	timervalue=0;
	while (!TestEchoInput);	// Wait until Echo returns
	
	while (TestEchoInput)	// And ends
	{
		 timervalue++;		// Laskee kestoa kun echossa high
	};						
	MyFloat=timervalue/16.6;	//Laskee kestosta etäisyyden sentteinä
	
	for (i=0;i<30000;i++);		//Looppi joka pitää huolen että sitä ei kutsuta uudestaan liian aikaisin
	return MyFloat;
}
	
void main(void)
{
	float MyFloat = 1.2345;
	float Test = 0;
	char theStr1[] = "ROBITTI 1.0";
   LCD_Start();                  // LCD käynttöönotto
   LCD_Position(0,3);            // Place LCD cursor at row 0, col 5.
   LCD_PrString(theStr1);        //Tulosta teksti 1

	//Luetaan Etäisyysfunktiosta arvo ja pistetään Testiin
	//Pelkkää testiä voi käyttää auton ohjaamiseen ilman printfloatteja
	Test = Etaisyys();
	LCD_Position(1,5);
	
	//Jos arvo on alle 100, printataan arvo ulos
	if (Test < 100) {
	
	LCD_PrintFloat(Test, 1);
		
	}
	
	//Jos arvo on yli 100, printataan ulos 0
	else 
		LCD_PrintFloat(0, 1);
	
	//ÄLÄ POISTA!!!
	while (1);		//ESTÄÄ MAIN:ISTA POISTUMISEN TÄRKEÄ!!! ÄLÄ POISTA!!!
	//ÄLÄ POISTA!!!
	
}
	