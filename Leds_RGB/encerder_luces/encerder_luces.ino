#define BLUE 7
#define GREEN 6
#define RED 5
void setup() {
  pinMode(BLUE,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  digitalWrite(BLUE,LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(RED,LOW);
}

void loop() {
  digitalWrite(BLUE, HIGH);
  delay(120);
  digitalWrite(BLUE, LOW);
  delay(120);
  digitalWrite(GREEN, HIGH);
  delay(120);
  digitalWrite(GREEN, LOW);
  delay(120);
  digitalWrite(RED, HIGH);
  delay(120);
  digitalWrite(RED, LOW);
  delay(120);
}
