int button1 = 10;
int button2 = 11;
int button3 = 12;
int checkPress = 0;

void setup() {
  // initialize digital pin 13 as an output.
  
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
  checkPress = digitalRead(button1);
  if (checkPress == HIGH){
    int pinNum = 3;
    while (pinNum < 11){
      _blink(pinNum, 50);
      pinNum++;
    }
  }
 }

int _blink(int pinNum, int delayNum){
  digitalWrite(pinNum, HIGH);
  delay(delayNum);
  digitalWrite(pinNum, LOW); 
  delay(delayNum);

}

