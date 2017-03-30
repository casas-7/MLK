/*
 * Digital I/O (dual 7-segment display board) lab sketch.
 *
 * This sketch displays the number "5" on the right-hand digit on the
 * display board using only PORT-style programming.
 *
 * Segment "a" is connected to PORTB:0, and "b" through "g" are connected to
 * PORTD:7 through PORTD:2, respectively.  We are avoiding using PORTD:1-0
 * because the serial port is connected to them, and using them can prevent
 * the Serial Console or code download from working.
 *
 * Remember that the display is a common-anode type unit, so each segment is active-low.
 *
 *      PORTB    PORTD      <- PORT
 *    --543210  76543210    <- bit number
 *    -------a  bcdefg--    <- segment letter
 *
 * v1.00 <your name here> <current time/date here>
 */
void setup()
{
  DDRB = 0b00000001;
  DDRD = 0b11111100;
}

void loop()
{
  PORTB = 0b00000000;
  PORTD = 0b10010000;
}

void loop2()
{



}

void loop3 ()
{


}

void branchLoop(){

}


  
}


