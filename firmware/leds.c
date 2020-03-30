#include "board.h"
#include "thread.h"
#include "xtimer.h"

char led_thread_stack[THREAD_STACKSIZE_MAIN];

// Initialise the LEDs with all off.
// LSB - LED0 - Status
// 2SB - LED1 - RGB
// 3SB - LED2 - RGB
// 4SB - LED3 - RGB
// 5SB - MSB are unused.
uint8_t LED_STATE = 0b00000001;

void leds_start_flash(void) {
    for(int i = 0; i < 4; i++){
        LED0_ON;
        xtimer_usleep(50000);
        LED0_OFF;
        xtimer_usleep(50000);
    }
}

void *leds_thread_handler(void *arg)
{
    (void) arg;
    
    while(1){
        LED0_ON;
        xtimer_usleep(500000);
        LED0_OFF;
        xtimer_usleep(500000);
    }

    return NULL;
}

void leds_init(void){
    leds_start_flash();

    thread_create(led_thread_stack, sizeof(led_thread_stack),
                    THREAD_PRIORITY_MAIN - 1,
                    THREAD_CREATE_STACKTEST,
                    leds_thread_handler,
                    NULL, "leds");
}
