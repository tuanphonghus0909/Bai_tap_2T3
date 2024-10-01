#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led1(LED_PIN, LED_ACT);
LED led2(LED_PIN2, LED_ACT);

int led_control = 1;
void btnPush();
void btndbclick();
void btnHold();
OneButton button(BTN_PIN, !BTN_ACT);

void setup()
{
    led1.off();
    led2.off();
    button.attachClick(btnPush);
    button.attachDoubleClick(btndbclick);
    button.attachLongPressStart(btnHold);
}

void loop()
{  
    led1.loop();
    led2.loop();
    button.tick();
}

void btnPush()
{
    if(led_control == 2){
    led2.flip();
    }
    else{
      led1.flip();
    }
}

void btndbclick()
{
    led_control = led_control % 2 + 1;
}

void btnHold()
{
    if(led_control == 2){
    led2.blink(200);
    }
    else{
      led1.blink(200);
    }
}
