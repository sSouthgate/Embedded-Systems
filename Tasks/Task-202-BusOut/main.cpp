#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2
#define Extra_LED_1     PB_0
#define Extra_LED_2     PB_7
#define Extra_LED_3     PB_14     

// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN, Extra_LED_1, Extra_LED_2, Extra_LED_3);

int main()
{
    while (true) {
        leds = 0;   //Binary 000
        wait_us(500000);

        leds = 63;   //Binary 111
        wait_us(500000);    
    }
}


