# arduino-uno-r4_pwm_ssr

Here is a simple example sketch that also works with the UNO R4:

void setup() {
  pinMode(D2, OUTPUT);
  // set 100%
  analogWrite(D2,255) 
}

void loop() {}

Fortunately the Arduino UNO R4 provides some easy to use PwmOut class which provides more flexibility: The period needs to be defined in microseconds, so if you want to request a defined frequency in hz you can easily calculate this and there is a method to set the duty cycle using percent.

#include "pwm.h"

PwmOut pwm(D2);

void setup() {
  //period 50us = 20000hz; pulse 0 us = 0%
  pwm.begin(50,0.0);

  // set 100%
  pwm.pulse_perc(100.0);

}

void loop() {}

##ref

Under the Hood: Arduino UNO R4 - PWM - Phil Schatzmann https://www.pschatzmann.ch/home/2023/07/01/under-the-hood-arduino-uno-r4-pwm/

Arduino UNO R4のGPTを試す（Arduino） - えいあーるれいの技術日記 https://ar-ray.hatenablog.com/entry/2023/07/09/203755
