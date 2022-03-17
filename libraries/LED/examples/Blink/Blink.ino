/*
  程序名字：Blink
  程序功能：反复打开LED灯1秒钟，关闭LED灯1秒钟，实现闪烁效果
  程序说明：大多数Arduino开发板都板载一个LED灯，取名为LED_BUILTIN
           在UNO/MEGA/ZERO上为引脚13
           在MKR1000为引脚6
           在100ASK_STM32F103_MINI上为PA1
           如果是其它开发板，需要先确认LED灯所连引脚，并修改程序中的控制引脚
*/

// setup()函数开机后只会运行一次
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      // 将内置LED灯所接引脚，初始化为输出模式
}

// loop()函数会一直循环运行
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // 将LED灯关闭 (HIGH是输出高电平)
  delay(1000);                       // 等待一秒钟(1000毫秒)
  digitalWrite(LED_BUILTIN, LOW);    // 将LED灯打开 (LOW是输出低电平)
  delay(1000);                       // 等待一秒钟(1000毫秒)
}
