#include <stdio.h>

#include "board.h"
#include "xtimer.h"

#include "shell.h"
#include "msg.h"

#define MAIN_QUEUE_SIZE     (8)
static msg_t _main_msg_queue[MAIN_QUEUE_SIZE];


void start_flash(void) {
    for(int i = 0; i < 4; i++){
        LED0_ON;
	xtimer_usleep(50000);
	LED0_OFF;
	xtimer_usleep(50000);
    }
}

int main(void)
{
    puts("Remote Start Dongle.");

    start_flash();    

    /* we need a message queue for the thread running the shell in order to
     * receive potentially fast incoming networking packets */
    msg_init_queue(_main_msg_queue, MAIN_QUEUE_SIZE);

    /* start shell */
    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(NULL, line_buf, SHELL_DEFAULT_BUFSIZE);
    
    // Never reached.
    return 0;
}
