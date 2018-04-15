#include <ElapsedTime.h>

ElapsedTime t2(333);
ElapsedTime t3(750);
ElapsedTime t4(1000);
bool led2, led3, led4;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  led2 = false;
  led3 = false;
  led4 = false;
  t2.rst();
  t3.rst();
  t4.rst();
}

// the loop function runs over and over again forever
void loop() {
  if(t2.chk())
  {
    led2 = !led2;
    digitalWrite(2, led2);
  }
  if(t3.chk())
  {
    led3 = !led3;
    digitalWrite(3, led3);
  }
  if(t4.chk())
  {
    led4 = !led4;
    digitalWrite(4, led4);
  }
}
