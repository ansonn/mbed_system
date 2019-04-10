#include "mbed.h"
#include "cmsis_os.h"
#include <driver.h>

void operations_thread(void const *args);
void interactive_thread(const void *args);

Serial pc(PA_9, PA_10);
void command_thread(const void *args)
{
    pc.baud(115200);
    while(true) {
        pc.putc(pc.getc());
    }
}

osThreadDef(command_thread, osPriorityNormal, DEFAULT_STACK_SIZE);
osThreadDef(operations_thread, osPriorityNormal, DEFAULT_STACK_SIZE);
osThreadDef(interactive_thread, osPriorityNormal, DEFAULT_STACK_SIZE);

int main()
{
    osThreadCreate(osThread(operations_thread), NULL);
    osThreadCreate(osThread(command_thread), NULL);
		osThreadCreate(osThread(interactive_thread), NULL);
    while(true);
}

