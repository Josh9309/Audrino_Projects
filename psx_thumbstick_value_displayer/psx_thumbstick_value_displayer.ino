const byte leftClick = 2; //assign the pins for the buttons
const byte rightClick = 3;
const byte leftVert = A2; //assign the pins for the pots
const byte leftHor = A3;
const byte rightVert = A0;
const byte rightHor = A1;

int delayTime = 50; //so the serial output is more readable

void setup(){

pinMode(leftClick, INPUT); //set button pins to input
pinMode(rightClick, INPUT);

Serial.begin(9600); //lets arduino send text to computer
}

void loop(){
//output formatted as leftHorizontal, leftVertical, leftButton, rightButton, rightHorizontal, rightVertical
Serial.print(analogRead(leftHor));
Serial.print(", ");
Serial.print(analogRead(leftVert));

Serial.print(" ");
Serial.print(digitalRead(leftClick));
Serial.print(" ");
Serial.print(digitalRead(rightClick));
Serial.print(" ");

Serial.print(analogRead(rightHor));
Serial.print(", ");
Serial.println(analogRead(rightVert));

delay(delayTime);
}
