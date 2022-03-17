/*
  程序名字：BreatheLight
  程序功能：通过控制LED输出PWM，实现呼吸灯效果
  程序说明：大多数Arduino开发板都板载一个LED灯，取名为LED_BUILTIN
           在UNO/MEGA/ZERO上为引脚13
           在MKR1000为引脚6
           在100ASK_STM32F103_MINI上为PA1
           如果是其它开发板，需要先确认LED灯所连引脚，并修改程序中的控制引脚
*/

int x = 0;                         // 定义变量x，初始值为0

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);    // 将内置LED灯所接引脚，初始化为输出模式
}

void loop() {
  while (x < 255)                  // 如果x小于255就一直循环
  {
    analogWrite(LED_BUILTIN, x);   // 控制引脚模拟输出(x范围0~255)
    x = x + 1;                     // x自加1(为了结束循环)
    delay(5);                      // 延时5毫秒(否则运行太快，看不到效果)
  }

  while (x > 0)                    // 如果x大于0就一直循环
  {
    analogWrite(LED_BUILTIN, x);   // 控制引脚模拟输出(x范围0~255)
    x = x - 1;                     // x自减1(为了结束循环)
    delay(5);                      // 延时5毫秒(否则运行太快，看不到效果)
  }
}