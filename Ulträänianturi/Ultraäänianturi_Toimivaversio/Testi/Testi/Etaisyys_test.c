Float Etaisyys(void) {
	int i;
	int End = 0;
	float MyFloat = 1.2345;
	char* buf;
	


	
	
	// while (End <1 )
	//{
	// Trigger pulse
	TRIGG_Start();
	TRIGG_Switch(1);
	  for (i=0;i<4;i++); //n. 10us
	TRIGG_Switch(0);
	
	timervalue=0;
	while (!TestEchoInput);	// Wait until Echo returns
	while (TestEchoInput)	// And ends
	{
		 timervalue++;		// Laskee kestoa
	};						
	
	MyFloat=timervalue/16.6;	//Laskee kestosta etäisyyden sentteinä
	
	if (MyFloat < 100) {
	/*									// Print distance in CM
	buf = ftoa(MyFloat, &Status);
	
	
	LCD_Position(1,5);
	//LCD_PrString(buf);
	LCD_PrintFloat(MyFloat, 1);
	
	LCD_PrCString("cm      ");
	*/
	// End = 1;
	return MyFloat;
		
	}
	else {
	return 0;
	/*
	LCD_Position(1,5);
	LCD_PrCString("nope    ");	
	*/
	}
	
	
	for (i=0;i<30000;i++);
	
	
	// }
	}