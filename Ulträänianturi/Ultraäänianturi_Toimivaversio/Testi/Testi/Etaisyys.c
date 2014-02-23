float Etaisyys(void) {
	int i;
	float MyFloat = 1.2345;
	char* buf;
	
	// TestEchoInput pitää olla määritelty koodin alussa funktion ulkopuolella
	//timervalue pitää määritellä koodin alussa unsigned int
	
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
	
	for (i=0;i<30000;i++);
	return MyFloat;
}