void setup() {
  // put your setup code here, to run once:

  // set the digital pin for the built in LED to output
  pinMode(LED_BUILTIN, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  // apply high voltage to the LED
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  // apply low voltage to LED to power it off
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

}
