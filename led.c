
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <unistd.h>
#include <time.h>

#define LED_RED 7
#define LED_GREEN 21
#define LED_BLUE 22

int main(void)
{
    if(wiringPiSetup() == -1)
        return 1;

    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);

    digitalWrite(LED_RED,0);
    digitalWrite(LED_GREEN,0);
    digitalWrite(LED_BLUE,0);

    printf("3 Color LED Control Start !! \n");

    for(int i=0; i<20; i++)
    {
        printf("Red LED On !! \n");
        digitalWrite(LED_RED,1);
        usleep(500000);

        printf("Red LED Off !! Green LED On !!\n");
        digitalWrite(LED_RED,0);
        digitalWrite(LED_GREEN,1);
        usleep(500000);

        printf("Green LED Off !! Blue LED On !!\n");
        digitalWrite(LED_GREEN,0);
        digitalWrite(LED_BLUE,1);
        usleep(500000);

        printf("Blue LED Off !!\n");
        digitalWrite(LED_BLUE,0);
        usleep(500000);
    }

    return 0;
}
