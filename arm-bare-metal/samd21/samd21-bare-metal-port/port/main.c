/*
 * port.c
 *
 * Created: 11/30/2018 6:24:56 PM
 * Author : hdonahue
 */ 


#include "sam.h"
#define BUTTON_LIGHT_APP

/* +-----+------+--------+-----+--------------------------+
 * | DIR | INEN | PULLEN | OUT | Configuration            |
 * +-----+------+--------+-----+--------------------------+
 * |  0  |  0   |   0    |  X  |RESET/Analog              |
 * +-----+------+--------+-----+--------------------------+
 * |  0  |  0   |   1    |  0  |Pull-down, input disabled |
 * +-----+------+--------+-----+--------------------------+
 * |  0  |  0   |   1    |  1  |Pull-up, input disabled   |
 * +-----+------+--------+-----+--------------------------+
 * |  0  |  1   |   0    |  X  |Input                     |
 * +-----+------+--------+-----+--------------------------+
 * |  0  |  1   |   1    |  0  |Input w/ pull-down        |
 * +-----+------+--------+-----+--------------------------+
 * |  0  |  1   |   1    |  1  |Input w/ pull-up          |
 * +-----+------+--------+-----+--------------------------+
 * |  1  |  0   |   X    |  X  |Output, input disabled    |
 * +-----+------+--------+-----+--------------------------+
 * |  1  |  1   |   X    |  X  |Output, input enabled     |
 * +-----+------+--------+-----+--------------------------+
 */


extern void button_light_main(void);

int main(void)
{
    /* Initialize the SAM system */
    SystemInit();

    /* Replace with your application code */
#ifdef BUTTON_LIGHT_APP
	button_light_main();
#endif /*BUTTON_LIGHT_APP*/
    
	while (1) 
    {
    }
}
