#include "morse.h"

#define INTERVAL_TIME 100

void sendMorse(int pin, char *data)
{
  while(*data!=0)
  {
    switch(*data)
    {
      case '-':
        digitalWrite(pin, LOW);
        delay(INTERVAL_TIME*3);
        digitalWrite(pin, HIGH);
        delay(INTERVAL_TIME);
        break;
      case '.':
        digitalWrite(pin, LOW);
        delay(INTERVAL_TIME);
        digitalWrite(pin, HIGH);
        delay(INTERVAL_TIME);
        break;   
      case ' ':   
      default:
        digitalWrite(pin, HIGH);
        delay(INTERVAL_TIME*3);
        break;   
    }
    data++;
  }
  digitalWrite(pin, HIGH);
  delay(INTERVAL_TIME*3); 
}