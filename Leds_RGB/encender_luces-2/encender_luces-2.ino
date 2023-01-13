#define BLUE 7
#define GREEN 6
#define RED 5
// delayTime, que indica el tiempo que transcurre entre cada cambio que haremos en la intensidad del LED.
#define delayTime 10
void setup() {
  pinMode(BLUE,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  digitalWrite(BLUE,LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(RED,LOW);
}

void loop() {
  for(int i = 0; i < 255; i += 1) // 255 -> 5V (valor maximo)
  {
    analogWrite(BLUE, i);
    delay(delayTime);
  }
  digitalWrite(BLUE, LOW);
  delay(1000);
  for(int i = 0; i < 225; i += 1)
  {
    analogWrite(GREEN,i);
    delay(delayTime);
  }
  digitalWrite(GREEN, LOW);
  delay(1000);
  for(int i = 0; i < 225; i += 1)
  {
    analogWrite(RED, i);
    delay(delayTime);
  }
  digitalWrite(RED, LOW);
  delay(1000);
}
