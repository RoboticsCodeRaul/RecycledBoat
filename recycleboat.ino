#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#define IN1 14 // D5
#define IN2 12 // D6
#define IN3 13 // D7
#define IN4 15 // D8
#define ENA 2 // D4
#define ENB 4 // D2

String command;             //String to store app command state.
int speedCar = 800;         // 400 - 1023.
int speed_Coeff = 3;
SoftwareSerial mySerial(11, 12); // RX, TX
char opcao;
const char* ssid = "RecycledBoat";
const char* password = "password";
ESP8266WebServer server(80);
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  mySerial.begin(9600);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

  // Starting WEB-server
  server.on ( "/", HTTP_handleRoot );
  server.onNotFound ( HTTP_handleRoot );
  server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  server.handleClient();

  command = server.arg("State");
  if (command == "F") moveF();
  else if (command == "B") moveB();
  else if (command == "L") moveL();
  else if (command == "R") moveR();
  else if (command == "S") moveSTOP();


  //  if (mySerial.available()) {
  //    opcao = mySerial.read();
  //    switch (opcao) {
  //      case 'F': moveF();
  //        break;
  //      case 'B': moveB();
  //        break;
  //      case 'R': moveR();
  //        break;
  //      case 'L': moveL();
  //        break;
  //      case 'S': moveSTOP();
  //        break;
  //    }
  //  }
}


void moveF() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

}
void moveB() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

}
void moveL() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

}
void moveR() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

}
void moveSTOP() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void HTTP_handleRoot(void) {

  if ( server.hasArg("State") ) {
    Serial.println(server.arg("State"));
  }
  server.send ( 200, "text/html", "" );
  delay(1);
}
