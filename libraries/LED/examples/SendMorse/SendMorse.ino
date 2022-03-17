/*
  程序名字：SendMorse
  程序功能：通过控制LED亮灭时间，实现发送摩斯密码效果
  程序说明：大多数Arduino开发板都板载一个LED灯，取名为LED_BUILTIN
           在UNO/MEGA/ZERO上为引脚13
           在MKR1000为引脚6
           在100ASK_STM32F103_MINI上为PA1
           如果是其它开发板，需要先确认LED灯所连引脚，并修改程序中的控制引脚
*/

#include <morse.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      // 将内置LED灯所接引脚，初始化为输出模式
}

void loop() {
  sendMorse(LED_BUILTIN, ".... . .-.. .-.. ---"); // 控制内置LED灯发送相应的摩斯密码
}
