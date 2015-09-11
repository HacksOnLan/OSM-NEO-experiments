// YO, ColorTime is the length of the tail. Extra Value1 are cases #'d 1-3, 1 is a 1 color metoer, 2 is a 2 color, 3 is a 3 color tail aka RGB tail we did last night
//You can put this in it's own .ino file, just add
// PRIME_METEOR(ColorTime[VARIATION],BlankTime[VARIATION],Val1[VARIATION],    Val2[VARIATION]);
// to the primer's section
 
const PROGMEM  uint8_t MorphingPattern2[9] =
{
        B11111111,
        B11110111,
        B11011101,
        B11010101,
        B10101010,
        B10001010,
        B10000010,
        B10000001,
        B10000000
};
 
 
 
 
 
byte xds2=0;
 
/////////////////////////////////////////////////////////////////////////////////////////////
void MorphPulse2(byte xds2)
{// void MorphAfterZero
        byte xdata2 = pgm_read_byte (&MorphingPattern2[xds2]);
        byte yss2=0;
        while (yss2<9 && ToBorNotToB)
        {// for yss
                if (xdata2 & (1<<yss2))
                {
                        osmPWMtimeless(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color]);
                        //else {osmPWMtimeless(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color]);}
                        //PrintThis(0,0,1,0);// debug
                }
                else
                {
                        osmPWMtimeless(0,0,0);
                        //PrintThis(0,1,0,0);// debug
                }
                yss2++;
        }// rof yss
        //PrintThis(0,0,0,1);// debug
}// diov MorphAfterZero
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
void Morph1(byte xds2)
{// void MorphAfterZero
        byte xdata2 = pgm_read_byte (&MorphingPattern2[xds2]);
        byte yss2=0;
        while (yss2<9 && ToBorNotToB)
        {// for yss
                if (xdata2 & (1<<yss2))
                {
                        osmPWMtimeless(CCR[VARIATION][1],CCG[VARIATION][1],CCB[VARIATION][1]);
                        //else {osmPWMtimeless(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color]);}
                        //PrintThis(0,0,1,0);// debug
                }
                else
                {
                        osmPWMtimeless(0,0,0);
                        //PrintThis(0,1,0,0);// debug
                }
                yss2++;
                //color++;
        }// rof yss
        //PrintThis(0,0,0,1);// debug
}// diov MorphAfterZero
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
void Morph2(byte xds2)
{// void MorphAfterZero
        byte xdata2 = pgm_read_byte (&MorphingPattern2[xds2]);
        byte yss2=0;
        while (yss2<9 && ToBorNotToB)
        {// for yss
                if (xdata2 & (1<<yss2))
                {
                        osmPWMtimeless(CCR[VARIATION][2],CCG[VARIATION][2],CCB[VARIATION][2]);
                        //else {osmPWMtimeless(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color]);}
                        //PrintThis(0,0,1,0);// debug
                }
                else
                {
                        osmPWMtimeless(0,0,0);
                        //PrintThis(0,1,0,0);// debug
                }
                yss2++;
        }// rof yss
        //PrintThis(0,0,0,1);// debug
}// diov MorphAfterZero
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
void Morph3(byte xds2)
{// void MorphAfterZero
        byte xdata2 = pgm_read_byte (&MorphingPattern2[xds2]);
        byte yss2=0;
        while (yss2<9 && ToBorNotToB)
        {// for yss
                if (xdata2 & (1<<yss2))
                {
                        osmPWMtimeless(CCR[VARIATION][3],CCG[VARIATION][3],CCB[VARIATION][3]);
                        //else {osmPWMtimeless(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color]);}
                        //PrintThis(0,0,1,0);// debug
                }
                else
                {
                        osmPWMtimeless(0,0,0);
                        //PrintThis(0,1,0,0);// debug
                }
                yss2++;
        }// rof yss
        //PrintThis(0,0,0,1);// debug
}// diov MorphAfterZero
/////////////////////////////////////////////////////////////////////////////////////////////
/*void MorphPulseOut(byte xds)
{// void MorphAfterZero
        byte xdata = pgm_read_byte (&MorphingPattern[xds]);
        byte yss=0;
        while (yss<7 && ToBorNotToB)
        {// for yss
                if (xdata & (1<<yss))
                {
                        osmPWMtimeless(0,0,0);
                        //PrintThis(0,0,1,0);// debug
                }
                else
                {
                        osmPWMtimeless(CCR[VARIATION][0],CCG[VARIATION][0],CCB[VARIATION][0]);
                        //else {osmPWMtimeless(CCR[VARIATION][color],CCG[VARIATION][color],CCB[VARIATION][color]);}
                        //PrintThis(0,1,0,0);// debug
                }
                yss++;
        }// rof yss
        //PrintThis(0,0,0,1);// debug
}// diov MorphAfterZero
*/
 
 
///// THIS IS A PRIME
/////////////////////////////////////////////////////////////////////////////////////////////
void PRIME_METEOR(int ColorTime, int BlankTime, int RandomYes, int RandomValue)
{// void osm_Morphed
               
        debug(1);
        int ThisTime2;
        int rgb2 = 0;
                //if ( color == 0 ) {color++;}
                xds2=0;
                if ( RandomYes == 2 || RandomYes == 3 )
                {
                osmPWMSCCxyz(CCR[VARIATION][0],CCG[VARIATION][0],CCB[VARIATION][0],CCS[VARIATION][0], ColorTime);
                if (color == 0) {color++;}
                }
               
                while (xds2<9 && ToBorNotToB)
                {// while xds
                        if (rgb2 == 9) {rgb2=0;}
                        rgb2++;
                        ThisTime2 = ColorTime;
                        while (ThisTime2 > 0 && ToBorNotToB)
                        { // while ThisTime
                             if ( RandomYes == 3 )
                             {
                                if (rgb2 < 3) {Morph1(xds2);}
                                if (rgb2 > 2 && rgb2 < 6) {Morph2(xds2);}
                                if (rgb2 >= 6) {Morph3(xds2);}
                                //MorphPulse2(xds2);
                                ThisTime2--;
                             }
                             else
                             {
                               MorphPulse2(xds2);
                               ThisTime2--;
                             }
                        }// while ThisTime
                if (xds2>5)
                {
                  osmPWMSCCxyz(0,0,0,0, 1);
                }
                        xds2++;
                }// elihw xds
                if (xds2>8)
                {
                        osmPWMSCCxyz(0,0,0,0, BlankTime);
                }
        debug(0);
        color++;
 
}// diov osm_Morphed
//////////////////////////////////////////////////////////////////////////////////////////////


