#ifndef Dimmer_H
#define Dimmer_H
#include <Arduino.h>
class Dimmer
{
  public:
  Dimmer(int pin, int count);
  void lightup();
  void lightdown();
  int _pin;
  int _count;
};
#endif
