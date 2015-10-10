int button1 = 11;
int button2 = 12;
int button3 = 13;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int pinNum;
int difficulty = 10;
int _speed = 25;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  
}

// the loop function runs over and over again forever

  void loop() {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    
    do{
    buttonState1 = digitalRead(button1);
    buttonState2 = digitalRead(button2);
    buttonState3 = digitalRead(button3);
      if (buttonState2 == HIGH){
        digitalWrite(difficulty, LOW);
        difficulty -= 1;
        _speed -=25;
      }
      if (buttonState3 == HIGH){
        digitalWrite(difficulty+1, HIGH);
        difficulty += 1;
        _speed+=25;
      }

    }while(buttonState1 == LOW);

    buttonState1 = LOW;
    do {
    
      pinNum = 3;
      do{
        _blink(pinNum, _speed);
        pinNum++;
      }while (pinNum < 11 and buttonState1 == LOW);
     pinNum = 9;
     while (pinNum > 3){
       _blink(pinNum, _speed);
       pinNum--;
        }
      }while(buttonState1 == LOW);
  }
  


int _blink(int pinNum, int delayNum){
  if (buttonState1 == LOW){
  buttonState1 = digitalRead(button1);
  }
  digitalWrite(pinNum, HIGH);
  delay(delayNum);
    if (buttonState1 == LOW){
  buttonState1 = digitalRead(button1);
  }
  digitalWrite(pinNum, LOW); 
  delay(delayNum);
    if (buttonState1 == LOW){
  buttonState1 = digitalRead(button1);
  }


}

