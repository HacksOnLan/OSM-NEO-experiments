/// 42
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////




void PRIMER(byte PrimeSelector)

{// void PRIMER
	
	if (PrimeSelector == 1)
	{// if 1
		PRIME_STROBE();
	}// fi 1
	
	
	if (PrimeSelector == 2)
	{// if 2
		PRIME_TRACE();
	}// fi 2
	
	
	if (PrimeSelector == 3)
	{// if 3
		PRIME_MORPH(ColorTime[VARIATION],BlankTime[VARIATION]);
	}// fi 3
	
	
	
	if (PrimeSelector == 4)
	{// if 4
		PRIME_PULSE(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION],    Val2[VARIATION]); 
		          //( int ColorTime,       int BlankTime,     boolean RandomYes,   int RandomValue)
	}// fi 4
	
	
	
	if (PrimeSelector == 5)
	{// if 5
		PRIME_TRIPLERAINBOW(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION], Val2[VARIATION]);
		                 //( int RainbowTime,    int RainBlankTime,   byte numRainbows, int numColors)
	}// fi 5
	
	
	if (PrimeSelector == 6)
	{// if 6
		PRIME_HBBPM(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION], Val2[VARIATION]);
	}// fi 6
	

	if (PrimeSelector == 7)
	{// if 7
		PRIME_SANDBOX1();
	}// fi 7
	
	
	if (PrimeSelector == 8)
	{// if 8
		PRIME_SANDBOX2();
	}// fi 8


	if (PrimeSelector == 9)
	{// if 9
		PRIME_SANDBOX3();
	}// fi 9

	
	if (PrimeSelector == 10)
	{// if 10
		PRIME_SANDBOX4();
	}// fi 10	


	if (PrimeSelector == 11)
	{// if 11
		PRIME_SANDBOX5();
	}// fi 11
	
	
	if (PrimeSelector == 12)
	{// if 12
		PRIME_SANDBOX6();
	}// fi 12
	
	
}// diov PRIMER




/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////





void PRIMERCOLOR(byte PrimeSelector)

{// void PRIMER
	
	if (PrimeSelector == 1)
	{// if 1
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
		  PRIMEFIXCOLOR();
		}
		else
		{
          BlankCheck();
		  PRIME_STROBE();	
		}
		
	}// fi 1
	
	
	if (PrimeSelector == 2)
	{// if 2
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_TRACE();
		}
	}// fi 2
	
	
	
	if (PrimeSelector == 3)
	{// if 3
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_MORPH(ColorTime[VARIATION],BlankTime[VARIATION]);	
		}
	}// fi 3
	
	
	
	if (PrimeSelector == 4)
	{// if 4
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_PULSE(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION],    Val2[VARIATION]);
			//( int ColorTime,       int BlankTime,     boolean RandomYes,   int RandomValue)
		}		
	}// fi 4
	
	
	
	if (PrimeSelector == 5)
	{// if 5
		
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_TRIPLERAINBOW(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION], Val2[VARIATION]);
			//( int RainbowTime,    int RainBlankTime,   byte numRainbows, int numColors)
		}		
	}// fi 5
	
	
	if (PrimeSelector == 6)
	{// if 6
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_HBBPM(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION], Val2[VARIATION]);
		}		
	}// fi 6
	

	if (PrimeSelector == 7)
	{// if 7
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_SANDBOX1();
		}
	}// fi 7
	
	
	if (PrimeSelector == 8)
	{// if 8
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_SANDBOX2();
		}
	}// fi 8


	if (PrimeSelector == 9)
	{// if 9
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_SANDBOX3();
		}
	}// fi 9

	
	if (PrimeSelector == 10)
	{// if 10
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_SANDBOX4();
		}
	}// fi 10


	if (PrimeSelector == 11)
	{// if 11
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_SANDBOX5();
		}
	}// fi 11


	if (PrimeSelector == 12)
	{// if 11
		if (!VirtualPreview && (Preview[VARIATION] == 0))
		{
			PRIMEFIXCOLOR();
		}
		else
		{
			BlankCheck();
			PRIME_SANDBOX6();
		}
	}// fi 11
	
		
}// diov PRIMER




/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////



void BlankCheck(void)
{
	if ((CurrentColor == 0) && (ColorMaxCount[VARIATION] == 0) ){ osmPWM(12,12,12,3);osmPWM(0,0,0,60);}
}



void PRIMEFIXCOLOR(void)// fix color for color change
{// void PRIME_STROBE
	color = ColorMaxCount[VARIATION];
	if (CurrentColor == 0) { osmPWM(12,12,12,3); }
	osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], 60);
}// void PRIME_STROBE




void PRIME_STROBE(void)
{// void PRIME_STROBE
	osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], ColorTime[VARIATION]);
	osmPWMSCCxyz(0,0,0, 0,BlankTime[VARIATION]);
	color++;
}// void PRIME_STROBE



void PRIME_TRACE(void)
{// void PRIME_TRACE
	if (color==0) {color++;}
	osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], ColorTime[VARIATION]);
	osmPWMSCCxyz(CCR[VARIATION][0]    ,CCG[VARIATION][0],    CCB[VARIATION][0],    CCS[VARIATION][0],     BlankTime[VARIATION]);
	color++;
}// void PRIME_TRACE



void PRIME_SANDBOX1(void)// PRIME 7
{// VOID SANDBOX1
	osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], 4);

	color++;
        if(color == sizeof(CCG[VARIATION])/sizeof(CCG[VARIATION][0]))
          color=0;
}// DIOV SANDBOX1


void PRIME_SANDBOX2(void)// PRIME 8
{// VOID SANDBOX2
        int time;

        time = random(1,4); //EXclusive
        switch(time) {
          case 1:
          time = 2;
          break;
          
          case 2:
          time = 8;
          break;
          
          default:
          time = 16;
          break;
        }
	osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], time);
	
        osmPWMSCCxyz(0,0,0,0,BlankTime[VARIATION]);
	color++;
        if(color == sizeof(CCG[VARIATION])/sizeof(CCG[VARIATION][0]))
          color=0;
}// DIOV SANDBOX2

#define TOTAL 16
int mychange = -1;
int myval = 16;
void PRIME_SANDBOX3(void)// PRIME 9
{// VOID SANDBOX3
        osmPWMSCCxyz(CCR[VARIATION][0],CCG[VARIATION][0],CCB[VARIATION][0],CCS[VARIATION][0], myval);// first color selected
        osmPWMSCCxyz(0,0,0,0,TOTAL-myval);
        myval += mychange;
        
        if(myval<=0)
          mychange *= -1;
        if(myval>=TOTAL)
          mychange *= -1;
}// DIOV SANDBOX3

void PRIME_SANDBOX4(void)// PRIME 10
{// VOID SANDBOX4
	//osmPWMSCCxyz(CCR[VARIATION][0],CCG[VARIATION][0],CCB[VARIATION][0],CCS[VARIATION][0], Val1[VARIATION]);// first color selected // TIME = VAL1
	//osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], ColorTime[VARIATION]);
	//osmPWMSCCxyz(CCR[VARIATION][0],CCG[VARIATION][0],CCB[VARIATION][0],CCS[VARIATION][0], Val1[VARIATION]);// first color selected // TIME = VAL1
	//osmPWMSCCxyz(0,0,0,0,BlankTime[VARIATION]);
	//color++;
}// DIOV SANDBOX4

void PRIME_SANDBOX5(void)// PRIME 11
{// VOID SANDBOX5
	//osmPWMSCCxyz(255,255,255,0, 1);// white flash
	//osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], ColorTime[VARIATION]);
	//osmPWMSCCxyz(0,0,0,0,BlankTime[VARIATION]);
	//color++;
}// DIOV SANDBOX5

void PRIME_SANDBOX6(void)// PRIME 12
{// VOID SANDBOX5
	//osmPWMSCCxyz(255,255,255,0, 1);// white flash
	//osmPWMSCCxyz(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color],CCS[VARIATION][color], ColorTime[VARIATION]);
	//osmPWMSCCxyz(0,0,0,0,BlankTime[VARIATION]);
	//color++;
}// DIOV SANDBOX5




