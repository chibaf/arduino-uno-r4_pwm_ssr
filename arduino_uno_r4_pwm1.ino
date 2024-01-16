#define PWM_PIN A5
void setup() {
  pinMode(PWM_PIN, OUTPUT);
}

void loop() {
  for (int i=0; i<=255; ++i)
  {
    analogWrite(PWM_PIN, i);
    delay(10);
  }
  for (int i=255; i>-0; --i)
  {
    analogWrite(PWM_PIN, i);
    delay(10);
  }
}