Project:      output/Gyro
Build Number: 0
Date:         Wed Feb 19 18:22:00 2014
Compiler:     ICCM8C
Version:      7.05.00


Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   0150   00C5 =    197. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       01C7  LoadConfigTBL_testi_Bank0
       01F2  LoadConfigTBL_testi_Bank1
       0215  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   0215   013B =    315. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0215  LoadConfigTBL_testi_Ordered
       02DA  _LoadConfigInit
       02DA  LoadConfigInit
       02F9  _LoadConfig_testi
       02F9  LoadConfig_testi
       0350  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   0350   0600 =   1536. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0350  LCD_PrCString
       0350  _LCD_PrCString
       0362  LCD_HEX_STR
       0372  LCD_PrHexByte
       0372  _LCD_PrHexByte
       0385  _LCD_PrHexInt
       0385  LCD_PrHexInt
       038C  _LCD_PrString
       038C  LCD_PrString
       0396  LCD_WriteData
       0396  _LCD_Write_Data
       0396  _LCD_WriteData
       0396  LCD_Write_Data
       03AA  _LCD_Control
       03AA  LCD_Control
       0451  _LCD_Init
       0451  LCD_Init
       0451  LCD_Start
       0451  _LCD_Start
       04BD  LCD_ROW_OFFSET
       04C1  _LCD_Position
       04C1  LCD_Position
       04CD  _LCD_Delay50uTimes
       04CD  LCD_Delay50uTimes
       04D3  LCD_Delay50u_Table
       04DB  LCD_Delay50u
       04DB  _LCD_Delay50u
       04EF  LCD_DrawBG
       0515  _LCD_DrawBG
       053E  LCD_DrawVBG
       056B  _LCD_DrawVBG
       059B  _LCD_InitVBG
       059B  LCD_InitVBG
       05C8  LCD_BG_TYPE1
       05CF  LCD_BG_TYPE2
       05D6  _LCD_InitBG
       05D6  LCD_InitBG
       0606  _GYRO_Start
       0606  GYRO_Start
       0627  GYRO_Stop
       0627  _GYRO_Stop
       0628  _GYRO_fReadBytes
       0671  GYRO_fReadBytes
       06B5  _GYRO_bWriteBytes
       06F2  GYRO_bWriteBytes
       072A  _GYRO_bWriteCBytes
       076A  GYRO_bWriteCBytes
       07A7  _GYRO_fSendRepeatStart
       07A7  GYRO_fSendRepeatStart
       07DA  _GYRO_fSendStart
       07DA  GYRO_fSendStart
       080B  _GYRO_fWrite
       080B  GYRO_fWrite
       088A  GYRO_bRead
       088A  _GYRO_bRead
       091D  _GYRO_SendStop
       091D  GYRO_SendStop
       0950  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   0950   0269 =    617. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0950  _readSlave
       0950  __text_start
       0A9E  _main
       0BB9  __text_end

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

