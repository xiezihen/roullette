int button1 = 11;
int button2 = 12;
int button3 = 13;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int pinNum;
int _speed = 50;
void setup() {
  buttonState1 = digitalRead(button1);
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
  buttonState1 = digitalRead(button1);
  }
   if (buttonState1 == HIGH){
    buttonState1 = LOW;
    do {

  
 
  
    
      pinNum = 3;
      while (pinNum < 11){
        _blink(pinNum, _speed);
        pinNum++;
      }
     pinNum = 9;
     while (pinNum > 3){
       _blink(pinNum, _speed);
       pinNum--;
        }
      }while(buttonState1 == LOW);
  }


int _blink(int pinNum, int delayNum){
  if (buttonState1 LOW){\
  buttonState1 = digitalRead(button1);
  }
  digitalWrite(pinNum, HIGH);
  delay(delayNum);
    if (buttonState1 LOW){\
  buttonState1 = digitalRead(button1);
  }
  digitalWrite(pinNum, LOW); 
  delay(delayNum);
    if (buttonState1 LOW){\
  buttonState1 = digitalRead(button1);
  }


}

