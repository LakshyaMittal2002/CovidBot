#include<LiquidCrystal.h>
int motor1pin1=7;
int motor1pin2=8;
int motor2pin1=9;
int motor2pin2=10;
int speed1=A1;
int speed2=A0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String screen_print1="Hello I am Wall-e";




void speedincreasestraight( int speedc1,int speedc2,int delayf){
  for (int i=0;i<255;i++){
  analogWrite(speedc1,i);
  analogWrite(speedc2,i);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2,LOW);
  delay(delayf);
  
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,LOW);
  delay(delayf);
  }
  
  
}
//void screen_print(string screen){
//  lcd.print(screen);
//}
void setup() {
 analogWrite(6, 60);
 lcd.begin(16,2);
 pinMode(motor1pin1,OUTPUT);
 pinMode(motor1pin2,OUTPUT);
 pinMode(motor2pin1,OUTPUT);
 pinMode(motor2pin2,OUTPUT);
 pinMode(speed1,OUTPUT);
 pinMode(speed2,OUTPUT);
 


}

void loop() {
// analogwrite(speed1,150);
// analogwrite(speed2,150);
lcd.setCursor(0,0);
lcd.print("   Hello I am ");
lcd.setCursor(0,1);
lcd.print("     Wall-E");

//speedincreasestraight(speed1,speed2,delayf);

 

}