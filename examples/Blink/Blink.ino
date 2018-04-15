#include <ElapsedTime.h>

ElapsedTime t(1000);
bool led;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  led = false;
  t.rst();
}

// the loop function runs over and over again forever
void loop() {
  if(t.chk())
  {
    led = !led;
    digitalWrite(LED_BUILTIN, led);
  }
}
