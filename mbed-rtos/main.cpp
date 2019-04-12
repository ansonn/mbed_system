#include "mbed.h"
#include "cmsis_os.h"

DigitalOut led1(PA_1);
//DigitalOut led2(LED2);
Serial pc(PA_9, PA_10);

void led2_thread(void const *args)
{
    while (true) {
        led1 = !led1;
        osDelay(1000);
    }
}

void serial_thread(const void *args)
{
    pc.baud(115200);
    while(true) {
        pc.putc(pc.getc());
    }
}

osThreadDef(serial_thread, osPriorityNormal, DEFAULT_STACK_SIZE);
osThreadDef(led2_thread, osPriorityNormal, DEFAULT_STACK_SIZE);

int main()
{
    osThreadCreate(osThread(led2_thread), NULL);
    osThreadCreate(osThread(serial_thread), NULL);
    while(true);
}
