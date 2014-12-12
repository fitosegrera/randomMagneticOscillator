#include <Wire.h>

#define RELAY_ON 0
#define RELAY_OFF 1
#define RELAY_1 2
#define RELAY_2 3
#define RELAY_3 4
#define RELAY_4 5
#define RELAY_5 6
#define RELAY_6 7
#define RELAY_7 8
#define RELAY_8 9
#define RELAY_9 10
#define RELAY_10 11
#define RELAY_11 12
#define RELAY_12 13
#define DELAY 200
void setup()
{
  Wire.begin();
  Serial.begin(9600);
  pinMode(RELAY_1, OUTPUT);
  digitalWrite(RELAY_1, RELAY_OFF);
  pinMode(RELAY_2, OUTPUT);
  digitalWrite(RELAY_2, RELAY_OFF);
  pinMode(RELAY_3, OUTPUT);
  digitalWrite(RELAY_3, RELAY_OFF);
  pinMode(RELAY_4, OUTPUT);
  digitalWrite(RELAY_4, RELAY_OFF);
  pinMode(RELAY_5, OUTPUT);
  digitalWrite(RELAY_5, RELAY_OFF);
  pinMode(RELAY_6, OUTPUT);
  digitalWrite(RELAY_6, RELAY_OFF);
  pinMode(RELAY_7, OUTPUT);
  digitalWrite(RELAY_7, RELAY_OFF);
  pinMode(RELAY_8, OUTPUT);
  digitalWrite(RELAY_8, RELAY_OFF);
  pinMode(RELAY_9, OUTPUT);
  digitalWrite(RELAY_9, RELAY_OFF);
  pinMode(RELAY_10, OUTPUT);
  digitalWrite(RELAY_10, RELAY_OFF);
  pinMode(RELAY_11, OUTPUT);
  digitalWrite(RELAY_11, RELAY_OFF);
  pinMode(RELAY_12, OUTPUT);
  digitalWrite(RELAY_12, RELAY_OFF);
}

void loop()
{
  char in = Serial.read();
  Serial.println(in);
  delay(10);

  switch (in) {
    case 'a':
      digitalWrite(RELAY_1, RELAY_ON);
      break;
    case 'b':
      digitalWrite(RELAY_2, RELAY_ON);
      break;
    case 'c':
      digitalWrite(RELAY_3, RELAY_ON);
      break;
    case 'd':
      digitalWrite(RELAY_4, RELAY_ON);
      break;
    case 'e':
      digitalWrite(RELAY_5, RELAY_ON);
      break;
    case 'f':
      digitalWrite(RELAY_6, RELAY_ON);
      break;
    case 'g':
      digitalWrite(RELAY_7, RELAY_ON);
      break;
    case 'h':
      digitalWrite(RELAY_8, RELAY_ON);
      break;
    case 'i':
      digitalWrite(RELAY_9, RELAY_ON);
      break;
    case 'j':
      digitalWrite(RELAY_10, RELAY_ON);
      break;
    case 'k':
      digitalWrite(RELAY_11, RELAY_ON);
      break;
    case 'l':
      digitalWrite(RELAY_12, RELAY_ON);
      break;
    default:
      digitalWrite(RELAY_1, RELAY_OFF);
      digitalWrite(RELAY_2, RELAY_OFF);
      digitalWrite(RELAY_3, RELAY_OFF);
      digitalWrite(RELAY_4, RELAY_OFF);
      digitalWrite(RELAY_5, RELAY_OFF);
      digitalWrite(RELAY_6, RELAY_OFF);
      digitalWrite(RELAY_7, RELAY_OFF);
      digitalWrite(RELAY_8, RELAY_OFF);
      digitalWrite(RELAY_9, RELAY_OFF);
      digitalWrite(RELAY_10, RELAY_OFF);
      digitalWrite(RELAY_11, RELAY_OFF);
      digitalWrite(RELAY_12, RELAY_OFF);
  }
  /*

    digitalWrite(RELAY_2, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_2, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_3, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_3, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_4, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_4, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_5, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_5, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_6, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_6, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_7, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_7, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_8, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_8, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_9, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_9, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_10, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_10, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_11, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_11, RELAY_OFF);
    delay(DELAY);
    digitalWrite(RELAY_12, RELAY_ON);
    delay(DELAY);
    digitalWrite(RELAY_12, RELAY_OFF);
    delay(DELAY);
    */
}
