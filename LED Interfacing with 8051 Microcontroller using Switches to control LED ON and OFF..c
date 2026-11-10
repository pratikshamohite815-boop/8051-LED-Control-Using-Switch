#include <reg51.h>

#define LED P2
#define SWITCH P1

void delay(unsigned int time);

void main(void)
{
    SWITCH = 0xFF;
    LED = 0xFF;

    while(1)
    {
        if(SWITCH == 0xFE)
        {
            LED = 0xFE;
        }
        else if(SWITCH == 0xFD)
        {
            LED = 0xFD;
        }
        else if(SWITCH == 0xFB)
        {
            LED = 0xFB;
        }
        else if(SWITCH == 0xF7)
        {
            LED = 0xF7;
        }
        else
        {
            LED = 0xFF;
        }
    }
}

void delay(unsigned int time)
{
    unsigned int i, j;

    for(i = 0; i < time; i++)
    {
        for(j = 0; j < 113; j++);
    }
}
