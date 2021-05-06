#include <Dimmer.h>

Dimmer led(LED_BUILTIN,10);
void setup()
{
}
void loop() {
  led.lightup();
  led.lightdown();
}
