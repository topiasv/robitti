//*****************************************************************************
//*****************************************************************************
//  FILENAME: OMT.h
//   Version: 1.40, Updated on 2013/5/19 at 10:43:48                                          
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: OMT User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef OMT_INCLUDE
#define OMT_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  OMT_Stop
#pragma fastcall16  OMT_Start
#pragma fastcall16  OMT_On
#pragma fastcall16  OMT_Off
#pragma fastcall16  OMT_Switch
#pragma fastcall16  OMT_Invert
#pragma fastcall16  OMT_GetState


//-------------------------------------------------
// Constants for OMT API's.
//-------------------------------------------------
//
#define  OMT_ON   1
#define  OMT_OFF  0

//-------------------------------------------------
// Prototypes of the OMT API.
//-------------------------------------------------
extern void  OMT_Start(void);                                     
extern void  OMT_Stop(void);                                      
extern void  OMT_On(void);                                      
extern void  OMT_Off(void);                                      
extern void  OMT_Switch(BYTE bSwitch);
extern void  OMT_Invert(void);                                         
extern BYTE  OMT_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif
