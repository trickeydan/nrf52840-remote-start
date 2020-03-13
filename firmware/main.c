#include <stdio.h>
#include "board.h"
#include "xtimer.h"

int main(void)
{
    puts("RIOT USB stack example application");

    puts("Started USB stack!");
    
    while(1) {
        LED0_ON;
	xtimer_usleep(200000);
	LED0_OFF;
	xtimer_usleep(200000);
    }    

    return 0;
}
