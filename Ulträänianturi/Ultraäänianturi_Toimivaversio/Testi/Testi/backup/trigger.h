//*****************************************************************************
//*****************************************************************************
//  FILENAME: TRIGGER.h
//   Version: 1.40, Updated on 2013/5/19 at 10:43:48                                          
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: TRIGGER User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef TRIGGER_INCLUDE
#define TRIGGER_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  TRIGGER_Stop
#pragma fastcall16  TRIGGER_Start
#pragma fastcall16  TRIGGER_On
#pragma fastcall16  TRIGGER_Off
#pragma fastcall16  TRIGGER_Switch
#pragma fastcall16  TRIGGER_Invert
#pragma fastcall16  TRIGGER_GetState


//-------------------------------------------------
// Constants for TRIGGER API's.
//-------------------------------------------------
//
#define  TRIGGER_ON   1
#define  TRIGGER_OFF  0

//-------------------------------------------------
// Prototypes of the TRIGGER API.
//-------------------------------------------------
extern void  TRIGGER_Start(void);                                     
extern void  TRIGGER_Stop(void);                                      
extern void  TRIGGER_On(void);                                      
extern void  TRIGGER_Off(void);                                      
extern void  TRIGGER_Switch(BYTE bSwitch);
extern void  TRIGGER_Invert(void);                                         
extern BYTE  TRIGGER_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif
