/*
  程序名字：ReadAnalog
  程序功能：读取引脚模拟量，通过串口打印
  程序说明：部分Arduino开发板板载一个按键，取名为KEY_BUILTIN
           在UNO/MEGA/ZERO上按键引脚为2
           在100ASK_STM32F103_MINI上按键为PA0
           如果是其它开发板，需要先确认按键所连引脚，并修改程序中的控制引脚
*/
int x;                                // 定义变量x，用户保存按键状态

void setup() {
  pinMode(KEY_BUILTIN, INPUT);        // 将内置KEY所接引脚，初始化为输入模式
  Serial.begin(9600);                 // 启动串口，设置波特率为9600
}

void loop() {
  x = analogRead(KEY_BUILTIN);        // 获取按键引脚状态，保存结果到变量x
  Serial.println(x);                  // 将变量x的值，通过串口打印
  delay(1);                           // 延时1毫秒，确保稳定性
}