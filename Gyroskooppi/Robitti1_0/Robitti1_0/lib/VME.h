//*****************************************************************************
//*****************************************************************************
//  FILENAME: VME.h
//   Version: 1.40, Updated on 2013/5/19 at 10:43:48                                          
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: VME User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef VME_INCLUDE
#define VME_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  VME_Stop
#pragma fastcall16  VME_Start
#pragma fastcall16  VME_On
#pragma fastcall16  VME_Off
#pragma fastcall16  VME_Switch
#pragma fastcall16  VME_Invert
#pragma fastcall16  VME_GetState


//-------------------------------------------------
// Constants for VME API's.
//-------------------------------------------------
//
#define  VME_ON   1
#define  VME_OFF  0

//-------------------------------------------------
// Prototypes of the VME API.
//-------------------------------------------------
extern void  VME_Start(void);                                     
extern void  VME_Stop(void);                                      
extern void  VME_On(void);                                      
extern void  VME_Off(void);                                      
extern void  VME_Switch(BYTE bSwitch);
extern void  VME_Invert(void);                                         
extern BYTE  VME_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif