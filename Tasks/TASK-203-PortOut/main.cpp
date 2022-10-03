#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN   PC_6
#define TRAF_YEL1_PIN   PC_3
#define TRAF_RED1_PIN   PC_2
#define OBLED_0         PB_0
#define OBLED_1         PB_7
#define OBLED_2         PB_14
#define LEDMASK     0b0000000001001100
#define LEDMASK2    0b0100000010000001
// Objects
//BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
PortOut leds(PortC, LEDMASK);
PortOut OBleds(PortB, LEDMASK2);

int main()
{
    while (true) {
        leds = leds ^ 0xFFFF;
        OBleds = OBleds ^ 0xFFFF;
        //leds = 0;
        //OBleds = 0;   //Binary 000
        wait_us(500000);
        //leds = 0xFF;   //Binary 11111111
        //OBleds = 0xFFFF;
        //wait_us(500000);  
    }
}




