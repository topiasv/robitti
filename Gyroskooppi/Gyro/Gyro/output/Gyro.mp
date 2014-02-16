Project:      output/Gyro
Build Number: 0
Date:         Sun Feb 16 20:33:29 2014
Compiler:     ICCM8C
Version:      7.05.00


Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   0150   0096 =    150. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       0198  LoadConfigTBL_testi_Bank0
       01C3  LoadConfigTBL_testi_Bank1
       01E6  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   01E6   013B =    315. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       01E6  LoadConfigTBL_testi_Ordered
       02AB  _LoadConfigInit
       02AB  LoadConfigInit
       02CA  _LoadConfig_testi
       02CA  LoadConfig_testi
       0321  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   0321   0600 =   1536. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0321  LCD_PrCString
       0321  _LCD_PrCString
       0333  LCD_HEX_STR
       0343  LCD_PrHexByte
       0343  _LCD_PrHexByte
       0356  _LCD_PrHexInt
       0356  LCD_PrHexInt
       035D  _LCD_PrString
       035D  LCD_PrString
       0367  LCD_WriteData
       0367  _LCD_Write_Data
       0367  _LCD_WriteData
       0367  LCD_Write_Data
       037B  _LCD_Control
       037B  LCD_Control
       0422  _LCD_Init
       0422  LCD_Init
       0422  LCD_Start
       0422  _LCD_Start
       048E  LCD_ROW_OFFSET
       0492  _LCD_Position
       0492  LCD_Position
       049E  _LCD_Delay50uTimes
       049E  LCD_Delay50uTimes
       04A4  LCD_Delay50u_Table
       04AC  LCD_Delay50u
       04AC  _LCD_Delay50u
       04C0  LCD_DrawBG
       04E6  _LCD_DrawBG
       050F  LCD_DrawVBG
       053C  _LCD_DrawVBG
       056C  _LCD_InitVBG
       056C  LCD_InitVBG
       0599  LCD_BG_TYPE1
       05A0  LCD_BG_TYPE2
       05A7  _LCD_InitBG
       05A7  LCD_InitBG
       05D7  _GYRO_Start
       05D7  GYRO_Start
       05F8  GYRO_Stop
       05F8  _GYRO_Stop
       05F9  _GYRO_fReadBytes
       0642  GYRO_fReadBytes
       0686  _GYRO_bWriteBytes
       06C3  GYRO_bWriteBytes
       06FB  _GYRO_bWriteCBytes
       073B  GYRO_bWriteCBytes
       0778  _GYRO_fSendRepeatStart
       0778  GYRO_fSendRepeatStart
       07AB  _GYRO_fSendStart
       07AB  GYRO_fSendStart
       07DC  GYRO_fWrite
       07DC  _GYRO_fWrite
       085B  GYRO_bRead
       085B  _GYRO_bRead
       08EE  _GYRO_SendStop
       08EE  GYRO_SendStop
       0921  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   0921   0110 =    272. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0921  __text_start
       0921  _main
       0A31  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
               virtual_registers   0000   0004 =      4. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  __rX
       0001  __r3
       0002  __r1
       0003  __r0
       0004  __virtual_registers_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                    InterruptRAM   0004   0008 =      8. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0004  _NO_SHADOW
       0004  NO_SHADOW
       0004  Port_0_Data_SHADE
       0004  _Port_0_Data_SHADE
       0005  Port_1_Data_SHADE
       0005  _Port_1_Data_SHADE
       0006  Port_2_Data_SHADE
       0006  _Port_2_Data_SHADE
       0007  Port_1_DriveMode_0_SHADE
       0007  _Port_1_DriveMode_0_SHADE
       0008  _Port_1_DriveMode_1_SHADE
       0008  Port_1_DriveMode_1_SHADE
       0009  _Port_1_DriveMode_2_SHADE
       0009  Port_1_DriveMode_2_SHADE
       000A  Port_2_DriveMode_0_SHADE
       000A  _Port_2_DriveMode_0_SHADE
       000B  _Port_2_DriveMode_1_SHADE
       000B  Port_2_DriveMode_1_SHADE
       000C  __InterruptRAM_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                       testi_RAM   000C   0004 =      4. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       000C  _GYRO_bStatus
       000C  GYRO_bStatus
       000D  _GYRO_bData
       000D  GYRO_bData
       000E  _GYRO_bAddr
       000E  GYRO_bAddr
       0010  __testi_RAM_end
       0010  __ramareas_end

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
<library>	[ psocconfigtbl.asm, psocconfig.asm, lcd.asm, gyro.asm, rX.asm, r3.asm, r1.asm, r0.asm ]

Area Definitions

-blit:0x150.0x3fff
-bdata:0.0xff
-rwh:SSCParmBlk:0xf7.0xff

