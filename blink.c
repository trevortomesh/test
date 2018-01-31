/* This is just a little test file to see if the
"compiler" is working
*/

#include <msp430.h>

int main(void) {
  WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
  P1DIR = 0x01; // Set pin to output, 0b00000001

  for (;;) {
    volatile unsigned int i;
    P1OUT ^= 0x01; // toggle LED1 (P1.0) on/off, 0b00000001
    i = 5000;
    do (i--);
    while (i != 0);
  }
}
