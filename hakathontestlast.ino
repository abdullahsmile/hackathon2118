/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int trigPin2=12;
const int echoPin2=11;
int val=0;
// defines variables
long duration;
long duration2;
int flag=0;
int flag2=0;
int stat=0;
int stat2=0;
int distance;
int distance2;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(trigPin2, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin2, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
 pinMode(13,OUTPUT);

}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor

//second one
digitalWrite(trigPin2, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin2, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration2 = pulseIn(echoPin2, HIGH);
// Calculating the distance
distance2= duration2*0.034/2;


//Serial.println("");


if(distance<10){
//  Serial.print("Trash 1 is Full");
//Serial.print("|");

//Serial.print(" Full");
//Serial.print("|");
//Serial.println("50");
flag=0;
}
else{
  
  

 // Serial.print(" ");
//Serial.print("|");
flag=1;
  
}
if(distance2<10){
// Serial.println("Full");
//Serial.print("Full");
flag2=0;
}
else{
 
  

  //Serial.print(" ");
  flag2=1;
  
}
//first one
if(flag==0 && stat==1 && flag2==0 && stat2==0){
  stat=flag;
  
  Serial.print(" Full");
Serial.print("|");

  Serial.print("Full");

  
}

if(flag==1 && stat==0 && flag2==0 && stat2==0){
  stat=flag;
  
  Serial.print(" ");
Serial.print("|");
  Serial.print("Full");

}

if(flag==0 && stat==1 && flag2==1 && stat2==1){
  stat=flag;
  
  Serial.print(" Full");
  Serial.print("|");
  Serial.print("https://goo.gl/maps/c6DZnYJ2Q5T2");
Serial.print("|");
  Serial.print(" ");
  Serial.print("|");
  Serial.print(" ");
  
}

if(flag==1 && stat==0 && flag2==1 && stat2==1){
  stat=flag;
  
  Serial.print(" ");
Serial.print("|");
 Serial.print(" ");

}

//second one

if(flag==0 && stat==0 && flag2==0 && stat2==1){
  stat2=flag2;
  
  Serial.print(" Full");
Serial.print("|");

  Serial.print("Full");

}

if(flag==0 && stat==0 && flag2==1 && stat2==0){
  stat2=flag2;
  
  Serial.print(" Full");

    Serial.print("|");
     Serial.print(" ");
}

if(flag==1 && stat==1 && flag2==0 && stat2==1){
  stat2=flag2;
  
  Serial.print(" ");
Serial.print("|");

  Serial.print("Full");
  
  
}

if(flag==1 && stat==1 && flag2==1 && stat2==0){
  stat2=flag2;
  
  Serial.print(" ");
Serial.print("|");
  Serial.print(" ");
  
}

if(flag==0 && stat==1 && flag2==0 && stat2==1){
  stat=flag;
  stat2=flag2;
    Serial.print(" Full");
Serial.print("|");

  Serial.print("Full");

}

if(flag==1 && stat==0 && flag2==1 && stat2==0){
  stat=flag;
  stat2=flag2;

 Serial.print(" ");
Serial.print("|");
  Serial.print(" ");

  
}


 //Serial.println("flag "+flag);
//Serial.println("flag2 "+flag2);
  //Serial.println("stat "+stat);
//Serial.println("stat2 "+stat2);
delay(1000);

}
