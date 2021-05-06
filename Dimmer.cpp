#include <Dimmer.h>
Dimmer::Dimmer(int pin, int count)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _count=count;
  }
void Dimmer::lightup()
{
  for(int i=0;i<255;i+=_count)
  {
    analogWrite(_pin,i);
    delay(500);
    }
  }
void Dimmer::lightdown()
{
  for(int i=255;i>0;i-=_count)
  {
    analogWrite(_pin,i);
    delay(500);
    }
  }
