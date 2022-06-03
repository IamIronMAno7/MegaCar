int b1a = 3;
int b2a = 5;
int a1a = 9;
int a1b = 10;
int button = 2;

void setup() {
  pinMode(b1a,OUTPUT);
  pinMode(b2a,OUTPUT);
  pinMode(a1a,OUTPUT);
  pinMode(a1b,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void waitForButton() {
  while (digitalRead(button)==HIGH) {
    
  }
}

void stop() {
  analogWrite(a1a,0);
  analogWrite(a1b,0);
  analogWrite(b1a,0);
  analogWrite(b2a,0);
}

void leftForward() {
 analogWrite(a1a,0);
 analogWrite(a1b,255);
}

void rightForward() {
  analogWrite(b1a,255);
  analogWrite(b2a,0);

}

void leftBackward() {
 analogWrite(a1a,240);
 analogWrite(a1b,0);
}

void rightBackward() {
 analogWrite(b1a,0);
 analogWrite(b2a,255);
}

void spinLeft() {
  rightForward();
  leftBackward();
}

void spinRight() {
  rightBackward();
  leftForward();
}

void forward() {
  leftForward();
  rightForward();
}

void forward(int time) {
  forward();
  delay(time);
  stop();
  delay(500);
  
}

void backward(int time) {
  backward();
  delay(time);
  stop();
  delay(500);
  
}

void spinRight(int time) {
  spinRight();
  delay(time);
  stop();
  delay(500);
  
}

void spinLeft(int time) {
  spinLeft();
  delay(time);
  stop();
  delay(500);
  
}


void backward() {
 leftBackward();
 rightBackward(); 
}


void turnRight() {
  delay(500);
  spinRight(300);
  
}


void loop() {
waitForButton();
turnRight();

  
  
  
}
  
  
  /*waitForButton();
  delay(2000);
  forward(1000);
  backward(1000);
  spinLeft(1000);
  spinRight(1000);*/
  
  

/*
  waitForButton();
  delay(3000);
  leftForward();
  rightForward();
  waitForButton();
  stop();
   delay(3000);
*/
