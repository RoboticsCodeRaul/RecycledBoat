// the setup function runs once when you press reset or power the board

int IN1 = D8;
int IN2 = D5;
int IN3 = D6;
int IN4 = D7;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  //Girar o 1 motor - Direita
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);

  //Girar o 2 motor - Direita 
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, LOW);
  delay(2000);
  
  //Parar o 1 motor   
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(450);

  //Parar o 2 motor
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(450);

  //Girar o 1 motor - Esquerda
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);

  //Girar o 2 motor - Esquerda
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);

  //Parar o 1 motor
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(450);

  //Parar o 2 motor
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(450);
}