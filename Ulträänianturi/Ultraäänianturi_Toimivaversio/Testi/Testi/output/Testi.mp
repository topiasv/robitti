Project:      output/Testi
Build Number: 0
Date:         Tue Feb 18 15:23:01 2014
Compiler:     ICCM8C
Version:      7.05.00


Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   0150   0072 =    114. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       015C  LoadConfigTBL_testi_Bank0
       0193  LoadConfigTBL_testi_Bank1
       01C2  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   01C2   013B =    315. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       01C2  LoadConfigTBL_testi_Ordered
       0287  _LoadConfigInit
       0287  LoadConfigInit
       02A6  _LoadConfig_testi
       02A6  LoadConfig_testi
       02FD  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   02FD   02DF =    735. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       02FD  _TRIGG_On
       02FD  TRIGG_On
       0301  TRIGG_Start
       0301  TRIGG_Off
       0301  TRIGG_Stop
       0301  _TRIGG_Start
       0301  _TRIGG_Stop
       0301  _TRIGG_Off
       0303  _TRIGG_Switch
       0303  TRIGG_Switch
       0314  _TRIGG_Invert
       0314  TRIGG_Invert
       031C  _TRIGG_GetState
       031C  TRIGG_GetState
       0325  _LCD_PrCString
       0325  LCD_PrCString
       0337  LCD_HEX_STR
       0347  _LCD_PrHexByte
       0347  LCD_PrHexByte
       035A  _LCD_PrHexInt
       035A  LCD_PrHexInt
       0361  _LCD_PrString
       0361  LCD_PrString
       036B  _LCD_WriteData
       036B  LCD_Write_Data
       036B  _LCD_Write_Data
       036B  LCD_WriteData
       037F  _LCD_Control
       037F  LCD_Control
       0426  _LCD_Start
       0426  LCD_Init
       0426  _LCD_Init
       0426  LCD_Start
       0492  LCD_ROW_OFFSET
       0496  LCD_Position
       0496  _LCD_Position
       04A2  LCD_Delay50uTimes
       04A2  _LCD_Delay50uTimes
       04A8  LCD_Delay50u_Table
       04B0  LCD_Delay50u
       04B0  _LCD_Delay50u
       04C4  LCD_DrawBG
       04EA  _LCD_DrawBG
       0513  LCD_DrawVBG
       0540  _LCD_DrawVBG
       0570  LCD_InitVBG
       0570  _LCD_InitVBG
       059D  LCD_BG_TYPE1
       05A4  LCD_BG_TYPE2
       05AB  _LCD_InitBG
       05AB  LCD_InitBG
       05DB  _Echo_ISR
       05DC  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   05DC   0D4D =   3405. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       05DC  _LCD_PrintFloat
       05DC  __text_start
       0654  _Etaisyys
       07C0  _main
       0D7C  _ltoa
       0F85  _ftoa
       1329  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
               virtual_registers   0000   000B =     11. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  __rZ
       0001  __rY
       0002  __rX
       0003  __r7
       0004  __r6
       0005  __r5
       0006  __r4
       0007  __r3
       0008  __r2
       0009  __r1
       000A  __r0
       000B  __virtual_registers_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                    InterruptRAM   000B   0008 =      8. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       000B  _NO_SHADOW
       000B  NO_SHADOW
       000B  Port_0_Data_SHADE
       000B  _Port_0_Data_SHADE
       000C  Port_1_Data_SHADE
       000C  _Port_1_Data_SHADE
       000D  Port_2_Data_SHADE
       000D  _Port_2_Data_SHADE
       000E  Port_1_DriveMode_0_SHADE
       000E  _Port_1_DriveMode_0_SHADE
       000F  _Port_1_DriveMode_1_SHADE
       000F  Port_1_DriveMode_1_SHADE
       0010  _Port_1_DriveMode_2_SHADE
       0010  Port_1_DriveMode_2_SHADE
       0011  Port_2_DriveMode_0_SHADE
       0011  _Port_2_DriveMode_0_SHADE
       0012  _Port_2_DriveMode_1_SHADE
       0012  Port_2_DriveMode_1_SHADE
       0013  __InterruptRAM_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             bss   0013   0011 =     17. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0013  _timervalue
       0013  __bss_start
       0024  __ramareas_end
       0024  __bss_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             TOP   0000   00F2 =    242. bytes (abs,ovr,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0068  __Start
       00EF  _bGetPowerSetting
       00EF  bGetPowerSetting

Files Linked      [ module(s) ]

./obj/boot.o	[ boot.asm ]
obj/main.o	[ main.c ]
<library>	[ trigg.asm, psocconfigtbl.asm, psocconfig.asm, lcd.asm, echoint.asm, rZ.asm, rY.asm, rX.asm, r7.asm ]
[ r6.asm, r5.asm, r4.asm, r3.asm, r2.asm, r1.asm, r0.asm, divmodu_32x32_32_util.asm, fp_analysiseject_util.asm ]
[ fp_clrreg_util.asm, fp_nan_res_util.asm, fp_saveres_util.asm, fp_sendtoreg_util.asm, fp_sinf_res_util.asm ]
[ fp_szero_res_util.asm, fp_type_oprnd_util.asm, fp_unnormal_util.asm, fpadd_util.asm, fpcmp_util.asm ]
[ fpdiv_util.asm, fpmul_util.asm, i_div32_block_util.asm, i_div32_not_util.asm, i_mulu8_block_util.asm ]
[ long2fp_util.asm, ltoa.s, ftoa.s ]

Area Definitions

-blit:0x150.0x3fff
-bdata:0.0xff
-rwh:SSCParmBlk:0xf7.0xff

