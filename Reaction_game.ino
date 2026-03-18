int redLED = 12; 
int yellowLED = 11; 
int greenLED = 10; 
int whiteLED1 = 9;
int whiteLED2 = 8;

int buzzer = 7;

int button1 = 6;
int button2 = 13;

bool buttonPressed = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(whiteLED1, OUTPUT);
  pinMode(whiteLED2, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}
void startSequence(){
  digitalWrite(redLED, HIGH);
  buzz(100);
  delay(900);
  digitalWrite(redLED, LOW);

  digitalWrite(yellowLED, HIGH);
  buzz(100);
  delay(900);
  digitalWrite(yellowLED, LOW);

  digitalWrite(greenLED, HIGH);
  buzz(100);
  delay(random(200,3000));
  digitalWrite(greenLED, LOW);

}
void buzz(int t){
  digitalWrite(buzzer,HIGH);
  delay(t);
  digitalWrite(buzzer,LOW);
}
void loop() {
  startSequence();
  while(buttonPressed == 0){
    digitalWrite(whiteLED1, HIGH);
    digitalWrite(whiteLED2, HIGH);
      
    if (digitalRead(button1) == 0){
      buttonPressed = 1;
      digitalWrite(whiteLED2, LOW);
    }
    else if (digitalRead(button2) == 0){
      buttonPressed = 1;
      digitalWrite(whiteLED1, LOW);
      }
    }
    buzz(500);
    delay (1500);
    digitalWrite(whiteLED1, LOW);
    digitalWrite(whiteLED2, LOW);
    buttonPressed = 0;
  // put your main code here, to run repeatedly:
}
