#define PWM_PIN A5
void setup() {
  pinMode(PWM_PIN, OUTPUT);
}

void loop() {
  for (int i=0; i<=255; i=i+1)
  {
    analogWrite(PWM_PIN, i);
    delay(10);
  }
  analogWrite(PWM_PIN, 0);
  delay(1000);
 }