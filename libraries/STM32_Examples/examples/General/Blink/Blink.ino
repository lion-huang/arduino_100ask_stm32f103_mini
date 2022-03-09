/*
  Blink: Turns on the built-in LED on for one second, then off for one second, repeatedly.
  闪烁：将内置LED打开一秒钟，然后关闭一秒钟，如此重复。
*/

void setup() {
  // Set up the built-in LED pin as an output:
  // 将内置LED引脚设置为输出：
  pinMode(PA1, OUTPUT);
}

void loop() {
  // Turn the LED from off to on, or on to off
  // 将LED从关闭变为打开，或从打开变为关闭
  digitalWrite(PA1, !digitalRead(PA1));

  // Wait for 1 second (1000 milliseconds)
  // 等待1秒（1000毫秒）
  delay(1000);
}