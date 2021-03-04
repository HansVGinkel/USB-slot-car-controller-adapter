#include <XInput.h>

int pinAnalog = A0;
int pinAnalogPot1 = A1;
int pinAnalogPot2 = A2;

int toLow =0;
int toHigh =0;
int triggerValue =0;
int OutputValue =0;

const int ADC_Max = 1023; 

void setup()
  {
    XInput.setTriggerRange(0, ADC_Max);
    XInput.setAutoSend(false);
    XInput.begin();
   }

void loop() 
{
  toLow = map(analogRead(pinAnalogPot2), 0, 1023, 800, -800);
  toHigh = map(analogRead(pinAnalogPot1), 0, 1023, 1600, 800);
  triggerValue = map(analogRead(pinAnalog), 0, 1023, toLow, toHigh);
  
  OutputValue = constrain(triggerValue, 0, 1023);
  XInput.setTrigger(TRIGGER_RIGHT, OutputValue);     
  XInput.send();
}
