/*
  BlinkNcount：Turns on an LED on for one second, then off for one second, repeatedly.
  Counts and displays the count on the attached serial monitor
  将LED打开一秒钟，然后关闭一秒钟，如此重复。
  并在连接的串口终端监视器上显示计数。
 */
 
int n = 0;

void setup() {
  // initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Initialize virtual COM over USB on Maple Mini
  Serial.begin(115200);  // BAUD has no effect on USB serial: placeholder for physical UART
  
  // wait for serial monitor to be connected.
  while (!Serial)
  {
    digitalWrite(LED_BUILTIN,!digitalRead(LED_BUILTIN)); // Turn the LED from off to on, or on to off
    delay(100);         // fast blink
  }
  Serial.println("Blink LED & count Demo");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // set the LED on
  delay(500);              // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // set the LED off
  Serial.print("Loop #: ");
  n++;
  Serial.println(n);

  delay(500);              // wait
}
