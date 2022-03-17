/*
  程序名字：ReadKey
  程序功能：读取按键状态，对应控制LED亮灭
  程序说明：大多数Arduino开发板都板载一个LED灯，取名为LED_BUILTIN
           部分Arduino开发板板载一个按键，取名为KEY_BUILTIN
           在UNO/MEGA/ZERO上为LED引脚13，按键引脚为2
           在100ASK_STM32F103_MINI上LED为PA1，按键为PA0
           如果是其它开发板，需要先确认LED灯和按键所连引脚，并修改程序中的控制引脚
*/
int x;                                // 定义变量x，用户保存按键状态

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);       // 将内置LED灯所接引脚，初始化为输出模式
  pinMode(KEY_BUILTIN, INPUT);        // 将内置KEY所接引脚，初始化为输入模式
}

void loop() {

  x = digitalRead(KEY_BUILTIN);       // 获取按键引脚状态，保存结果到变量x

  if (x == LOW)                       // 判断引脚的状态，如果为低电平，即按下，执行以下内容
  {
    digitalWrite(LED_BUILTIN, LOW);   // 将LED灯打开 (LOW是输出低电平)
  }
  else                                // 如果为高电平，即没有按下下，执行以下内容
  {
    digitalWrite(LED_BUILTIN, HIGH);  // 将LED灯关闭 (HIGH是输出高电平)
  }

}