
#include <Stepper.h>
#include <Bridge.h>
#include <HTTPClient.h>

const int stepsPerRev = 200;

Stepper myStepper(stepsPerRev, 8,9,10,11);

int value = 0;
int inByte = 0;
char curPhoto = '0'; // which photo is currently on display?
boolean hold; //for reading if hold switch is on/off

// Hold switch and lights to signal state of Yun
int holdSwitch = 2;
int greenLED = 3;
int redLED = 4;

void setup() {
  Bridge.begin();
  Serial.begin(9600);
  myStepper.setSpeed(40);
  pinMode(greenLED, OUTPUT);     
  pinMode(redLED, OUTPUT);    
  pinMode(holdSwitch, INPUT); 
  while(!Serial);

}

// making the HOLD button the gateway to whether stuff things are even sent through 
// (will this "clog" my serial cause numbers are being sent but not going anywhere?)

void loop() {
  int holdState = digitalRead(holdSwitch);
  if (holdState == TRUE) {
    // do nothing
    Serial.println("HELLO");
  }
  if (holdState == FALSE) {
    incoming(); 
  }
}

void incoming() {

  while (Serial.available()) {  
    char inChar = (char)Serial.read();
    //Serial.println(inChar);
    //Serial.println(prevChar);

    /// initial connection established
    if (inChar == '111') {
      digitalWrite(greenLED, HIGH);
      delay(10000);
      digitalWrite(greenLED, LOW);
    }

    /// no connection
    if (inChar == '222') {
      digitalWrite(redLED, HIGH);
      delay(10000);
      digitalWrite(redLED, LOW);
    }

    // Tombraider Scene Tree
    if (inChar == '1') {
      switch (prevChar) {
      case '1':
        myStepper.step(200);
        break;
      case '2':
        myStepper.step(10);
        break;
      case '3':
        myStepper.step(20);
        break;
      case '4':
        myStepper.step(30);
        break;
      case '5':
        myStepper.step(40);
        break;
      case '6':
        myStepper.step(50);
        break;
      case '7':
        myStepper.step(60);
        break;
      case '8':
        myStepper.step(70);
        break;
      case '9':
        myStepper.step(80);
        break;
      case '10':
        myStepper.step(90);
        break;
      case '11':
        myStepper.step(100);
        break;
      case '12':
        myStepper.step(110);
        break;
      case '13':
        myStepper.step(120);
        break;
      case '14':
        myStepper.step(130);
        break;
      case '15':
        myStepper.step(140);
        break;
      case '16':
        myStepper.step(150);
        break;
      case '17':
        myStepper.step(160);
        break;
      case '18':
        myStepper.step(170);
        break;
      case '19':
        myStepper.step(180);
        break;
      case '20':
        myStepper.step(190);
        break;  
      default:
        break;
      }
    }

    // Bagan Pool
    if (inChar == '2') {
      switch (prevChar) {
      case '1':
        myStepper.step(190);
        break;
      case '2':
        myStepper.step(200);
        break;
      case '3':
        myStepper.step(10);
        break;
      case '4':
        myStepper.step(20);
        break;
      case '5':
        myStepper.step(30);
        break;
      case '6':
        myStepper.step(40);
        break;
      case '7':
        myStepper.step(50);
        break;
      case '8':
        myStepper.step(60);
        break;
      case '9':
        myStepper.step(70);
        break;
      case '10':
        myStepper.step(80);
        break;
      case '11':
        myStepper.step(90);
        break;
      case '12':
        myStepper.step(100);
        break;
      case '13':
        myStepper.step(110);
        break;
      case '14':
        myStepper.step(120);
        break;
      case '15':
        myStepper.step(130);
        break;
      case '16':
        myStepper.step(140);
        break;
      case '17':
        myStepper.step(150);
        break;
      case '18':
        myStepper.step(160);
        break;
      case '19':
        myStepper.step(170);
        break;
      case '20':
        myStepper.step(180);
        break;  
      default:
        break;
      } 
    }
    // Fireworks
    if (inChar == '3') {
      switch (prevChar) {
      case '1':
        myStepper.step(180);
        break;
      case '2':
        myStepper.step(190);
        break;
      case '3':
        myStepper.step(200);
        break;
      case '4':
        myStepper.step(10);
        break;
      case '5':
        myStepper.step(20);
        break;
      case '6':
        myStepper.step(30);
        break;
      case '7':
        myStepper.step(40);
        break;
      case '8':
        myStepper.step(50);
        break;
      case '9':
        myStepper.step(60);
        break;
      case '10':
        myStepper.step(70);
        break;
      case '11':
        myStepper.step(80);
        break;
      case '12':
        myStepper.step(90);
        break;
      case '13':
        myStepper.step(100);
        break;
      case '14':
        myStepper.step(110);
        break;
      case '15':
        myStepper.step(120);
        break;
      case '16':
        myStepper.step(130);
        break;
      case '17':
        myStepper.step(140);
        break;
      case '18':
        myStepper.step(150);
        break;
      case '19':
        myStepper.step(160);
        break;
      case '20':
        myStepper.step(170);
        break;  
      default:
        break;
      } 
    }

    // Sommerpalace JBC
    if (inChar == '4') {
      switch (prevChar) {
      case '1':
        myStepper.step(170);
        break;
      case '2':
        myStepper.step(180);
        break;
      case '3':
        myStepper.step(190);
        break;
      case '4':
        myStepper.step(200);
        break;
      case '5':
        myStepper.step(10);
        break;
      case '6':
        myStepper.step(20);
        break;
      case '7':
        myStepper.step(30);
        break;
      case '8':
        myStepper.step(40);
        break;
      case '9':
        myStepper.step(50);
        break;
      case '10':
        myStepper.step(60);
        break;
      case '11':
        myStepper.step(70);
        break;
      case '12':
        myStepper.step(80);
        break;
      case '13':
        myStepper.step(90);
        break;
      case '14':
        myStepper.step(100);
        break;
      case '15':
        myStepper.step(110);
        break;
      case '16':
        myStepper.step(120);
        break;
      case '17':
        myStepper.step(130);
        break;
      case '18':
        myStepper.step(140);
        break;
      case '19':
        myStepper.step(150);
        break;
      case '20':
        myStepper.step(160);
        break;  
      default:
        break;
      } 
    }

    // Bagan Balloon Air
    if (inChar == '5') {
      switch (prevChar) {
      case '1':
        myStepper.step(160);
        break;
      case '2':
        myStepper.step(170);
        break;
      case '3':
        myStepper.step(180);
        break;
      case '4':
        myStepper.step(190);
        break;
      case '5':
        myStepper.step(200);
        break;
      case '6':
        myStepper.step(10);
        break;
      case '7':
        myStepper.step(20);
        break;
      case '8':
        myStepper.step(30);
        break;
      case '9':
        myStepper.step(40);
        break;
      case '10':
        myStepper.step(50);
        break;
      case '11':
        myStepper.step(60);
        break;
      case '12':
        myStepper.step(70);
        break;
      case '13':
        myStepper.step(80);
        break;
      case '14':
        myStepper.step(90);
        break;
      case '15':
        myStepper.step(100);
        break;
      case '16':
        myStepper.step(110);
        break;
      case '17':
        myStepper.step(120);
        break;
      case '18':
        myStepper.step(130);
        break;
      case '19':
        myStepper.step(140);
        break;
      case '20':
        myStepper.step(150);
        break;  
      default:
        break;
      } 
    }

   // Chinese Art Wall
    if (inChar == '6') {
      switch (prevChar) {
      case '1':
        myStepper.step(150);
        break;
      case '2':
        myStepper.step(160);
        break;
      case '3':
        myStepper.step(170);
        break;
      case '4':
        myStepper.step(180);
        break;
      case '5':
        myStepper.step(190);
        break;
      case '6':
        myStepper.step(200);
        break;
      case '7':
        myStepper.step(10);
        break;
      case '8':
        myStepper.step(20);
        break;
      case '9':
        myStepper.step(30);
        break;
      case '10':
        myStepper.step(40);
        break;
      case '11':
        myStepper.step(50);
        break;
      case '12':
        myStepper.step(60);
        break;
      case '13':
        myStepper.step(70);
        break;
      case '14':
        myStepper.step(80);
        break;
      case '15':
        myStepper.step(90);
        break;
      case '16':
        myStepper.step(100);
        break;
      case '17':
        myStepper.step(110);
        break;
      case '18':
        myStepper.step(120);
        break;
      case '19':
        myStepper.step(130);
        break;
      case '20':
        myStepper.step(140);
        break;  
      default:
        break;
      } 
    }
    
       // Tah Prom Ruins
    if (inChar == '7') {
      switch (prevChar) {
      case '1':
        myStepper.step(140);
        break;
      case '2':
        myStepper.step(150);
        break;
      case '3':
        myStepper.step(160);
        break;
      case '4':
        myStepper.step(170);
        break;
      case '5':
        myStepper.step(180);
        break;
      case '6':
        myStepper.step(190);
        break;
      case '7':
        myStepper.step(200);
        break;
      case '8':
        myStepper.step(10);
        break;
      case '9':
        myStepper.step(20);
        break;
      case '10':
        myStepper.step(30);
        break;
      case '11':
        myStepper.step(40);
        break;
      case '12':
        myStepper.step(50);
        break;
      case '13':
        myStepper.step(60);
        break;
      case '14':
        myStepper.step(70);
        break;
      case '15':
        myStepper.step(80);
        break;
      case '16':
        myStepper.step(90);
        break;
      case '17':
        myStepper.step(100);
        break;
      case '18':
        myStepper.step(110);
        break;
      case '19':
        myStepper.step(120);
        break;
      case '20':
        myStepper.step(130);
        break;  
      default:
        break;
      } 
    }

    // Novice Girl
    if (inChar == '8') {
      switch (prevChar) {
      case '1':
        myStepper.step(130);
        break;
      case '2':
        myStepper.step(140);
        break;
      case '3':
        myStepper.step(150);
        break;
      case '4':
        myStepper.step(160);
        break;
      case '5':
        myStepper.step(170);
        break;
      case '6':
        myStepper.step(180);
        break;
      case '7':
        myStepper.step(190);
        break;
      case '8':
        myStepper.step(200);
        break;
      case '9':
        myStepper.step(10);
        break;
      case '10':
        myStepper.step(20);
        break;
      case '11':
        myStepper.step(30);
        break;
      case '12':
        myStepper.step(40);
        break;
      case '13':
        myStepper.step(50);
        break;
      case '14':
        myStepper.step(60);
        break;
      case '15':
        myStepper.step(70);
        break;
      case '16':
        myStepper.step(80);
        break;
      case '17':
        myStepper.step(90);
        break;
      case '18':
        myStepper.step(100);
        break;
      case '19':
        myStepper.step(110);
        break;
      case '20':
        myStepper.step(120);
        break;  
      default:
        break;
      } 
    }
    
    // Family Fun
    if (inChar == '9') {
      switch (prevChar) {
      case '1':
        myStepper.step(120);
        break;
      case '2':
        myStepper.step(130);
        break;
      case '3':
        myStepper.step(140);
        break;
      case '4':
        myStepper.step(150);
        break;
      case '5':
        myStepper.step(160);
        break;
      case '6':
        myStepper.step(170);
        break;
      case '7':
        myStepper.step(180);
        break;
      case '8':
        myStepper.step(190);
        break;
      case '9':
        myStepper.step(200);
        break;
      case '10':
        myStepper.step(10);
        break;
      case '11':
        myStepper.step(20);
        break;
      case '12':
        myStepper.step(30);
        break;
      case '13':
        myStepper.step(40);
        break;
      case '14':
        myStepper.step(50);
        break;
      case '15':
        myStepper.step(60);
        break;
      case '16':
        myStepper.step(70);
        break;
      case '17':
        myStepper.step(80);
        break;
      case '18':
        myStepper.step(90);
        break;
      case '19':
        myStepper.step(100);
        break;
      case '20':
        myStepper.step(110);
        break;  
      default:
        break;
      } 
    }

    // Family Fun
    if (inChar == '10') {
      switch (prevChar) {
      case '1':
        myStepper.step(110);
        break;
      case '2':
        myStepper.step(120);
        break;
      case '3':
        myStepper.step(130);
        break;
      case '4':
        myStepper.step(140);
        break;
      case '5':
        myStepper.step(150);
        break;
      case '6':
        myStepper.step(160);
        break;
      case '7':
        myStepper.step(170);
        break;
      case '8':
        myStepper.step(180);
        break;
      case '9':
        myStepper.step(190);
        break;
      case '10':
        myStepper.step(200);
        break;
      case '11':
        myStepper.step(10);
        break;
      case '12':
        myStepper.step(20);
        break;
      case '13':
        myStepper.step(30);
        break;
      case '14':
        myStepper.step(40);
        break;
      case '15':
        myStepper.step(50);
        break;
      case '16':
        myStepper.step(60);
        break;
      case '17':
        myStepper.step(70);
        break;
      case '18':
        myStepper.step(80);
        break;
      case '19':
        myStepper.step(90);
        break;
      case '20':
        myStepper.step(100);
        break;  
      default:
        break;
      } 
    }
    
   
    // Ayuttaya
    if (inChar == '11') {
      switch (prevChar) {
      case '1':
        myStepper.step(100);
        break;
      case '2':
        myStepper.step(110);
        break;
      case '3':
        myStepper.step(120);
        break;
      case '4':
        myStepper.step(130);
        break;
      case '5':
        myStepper.step(140);
        break;
      case '6':
        myStepper.step(150);
        break;
      case '7':
        myStepper.step(160);
        break;
      case '8':
        myStepper.step(170);
        break;
      case '9':
        myStepper.step(180);
        break;
      case '10':
        myStepper.step(190);
        break;
      case '11':
        myStepper.step(200);
        break;
      case '12':
        myStepper.step(10);
        break;
      case '13':
        myStepper.step(20);
        break;
      case '14':
        myStepper.step(30);
        break;
      case '15':
        myStepper.step(40);
        break;
      case '16':
        myStepper.step(50);
        break;
      case '17':
        myStepper.step(60);
        break;
      case '18':
        myStepper.step(70);
        break;
      case '19':
        myStepper.step(80);
        break;
      case '20':
        myStepper.step(90);
        break;  
      default:
        break;
      } 
    }
    
   
   // Cambodscha Guide Walking
    if (inChar == '12') {
      switch (prevChar) {
      case '1':
        myStepper.step(90);
        break;
      case '2':
        myStepper.step(100);
        break;
      case '3':
        myStepper.step(110);
        break;
      case '4':
        myStepper.step(120);
        break;
      case '5':
        myStepper.step(130);
        break;
      case '6':
        myStepper.step(140);
        break;
      case '7':
        myStepper.step(150);
        break;
      case '8':
        myStepper.step(160);
        break;
      case '9':
        myStepper.step(170);
        break;
      case '10':
        myStepper.step(180);
        break;
      case '11':
        myStepper.step(190);
        break;
      case '12':
        myStepper.step(200);
        break;
      case '13':
        myStepper.step(10);
        break;
      case '14':
        myStepper.step(20);
        break;
      case '15':
        myStepper.step(30);
        break;
      case '16':
        myStepper.step(40);
        break;
      case '17':
        myStepper.step(50);
        break;
      case '18':
        myStepper.step(60);
        break;
      case '19':
        myStepper.step(70);
        break;
      case '20':
        myStepper.step(80);
        break;  
      default:
        break;
      } 
    }
   
  
   // Trucks and Balloons
    if (inChar == '13') {
      switch (prevChar) {
      case '1':
        myStepper.step(80);
        break;
      case '2':
        myStepper.step(90);
        break;
      case '3':
        myStepper.step(100);
        break;
      case '4':
        myStepper.step(110);
        break;
      case '5':
        myStepper.step(120);
        break;
      case '6':
        myStepper.step(130);
        break;
      case '7':
        myStepper.step(140);
        break;
      case '8':
        myStepper.step(150);
        break;
      case '9':
        myStepper.step(160);
        break;
      case '10':
        myStepper.step(170);
        break;
      case '11':
        myStepper.step(180);
        break;
      case '12':
        myStepper.step(190);
        break;
      case '13':
        myStepper.step(200);
        break;
      case '14':
        myStepper.step(10);
        break;
      case '15':
        myStepper.step(20);
        break;
      case '16':
        myStepper.step(30);
        break;
      case '17':
        myStepper.step(40);
        break;
      case '18':
        myStepper.step(50);
        break;
      case '19':
        myStepper.step(60);
        break;
      case '20':
        myStepper.step(70);
        break;  
      default:
        break;
      } 
    }
  
  
   //    JBC ARC Tah Prom
    if (inChar == '14') {
      switch (prevChar) {
      case '1':
        myStepper.step(70);
        break;
      case '2':
        myStepper.step(80);
        break;
      case '3':
        myStepper.step(90);
        break;
      case '4':
        myStepper.step(100);
        break;
      case '5':
        myStepper.step(110);
        break;
      case '6':
        myStepper.step(120);
        break;
      case '7':
        myStepper.step(130);
        break;
      case '8':
        myStepper.step(140);
        break;
      case '9':
        myStepper.step(150);
        break;
      case '10':
        myStepper.step(160);
        break;
      case '11':
        myStepper.step(170);
        break;
      case '12':
        myStepper.step(180);
        break;
      case '13':
        myStepper.step(190);
        break;
      case '14':
        myStepper.step(200);
        break;
      case '15':
        myStepper.step(10);
        break;
      case '16':
        myStepper.step(20);
        break;
      case '17':
        myStepper.step(30);
        break;
      case '18':
        myStepper.step(40);
        break;
      case '19':
        myStepper.step(50);
        break;
      case '20':
        myStepper.step(60);
        break;  
      default:
        break;
      } 
    }
  
   
    //   Face
    if (inChar == '15') {
      switch (prevChar) {
      case '1':
        myStepper.step(60);
        break;
      case '2':
        myStepper.step(70);
        break;
      case '3':
        myStepper.step(80);
        break;
      case '4':
        myStepper.step(90);
        break;
      case '5':
        myStepper.step(100);
        break;
      case '6':
        myStepper.step(110);
        break;
      case '7':
        myStepper.step(120);
        break;
      case '8':
        myStepper.step(130);
        break;
      case '9':
        myStepper.step(140);
        break;
      case '10':
        myStepper.step(150);
        break;
      case '11':
        myStepper.step(160);
        break;
      case '12':
        myStepper.step(170);
        break;
      case '13':
        myStepper.step(180);
        break;
      case '14':
        myStepper.step(190);
        break;
      case '15':
        myStepper.step(200);
        break;
      case '16':
        myStepper.step(10);
        break;
      case '17':
        myStepper.step(20);
        break;
      case '18':
        myStepper.step(30);
        break;
      case '19':
        myStepper.step(40);
        break;
      case '20':
        myStepper.step(50);
        break;  
      default:
        break;
      } 
    }
   
   Hehe Rowing
     
    //   Face
    if (inChar == '15') {
      switch (prevChar) {
      case '1':
        myStepper.step(60);
        break;
      case '2':
        myStepper.step(70);
        break;
      case '3':
        myStepper.step(80);
        break;
      case '4':
        myStepper.step(90);
        break;
      case '5':
        myStepper.step(100);
        break;
      case '6':
        myStepper.step(110);
        break;
      case '7':
        myStepper.step(120);
        break;
      case '8':
        myStepper.step(130);
        break;
      case '9':
        myStepper.step(140);
        break;
      case '10':
        myStepper.step(150);
        break;
      case '11':
        myStepper.step(160);
        break;
      case '12':
        myStepper.step(170);
        break;
      case '13':
        myStepper.step(180);
        break;
      case '14':
        myStepper.step(190);
        break;
      case '15':
        myStepper.step(200);
        break;
      case '16':
        myStepper.step(10);
        break;
      case '17':
        myStepper.step(20);
        break;
      case '18':
        myStepper.step(30);
        break;
      case '19':
        myStepper.step(40);
        break;
      case '20':
        myStepper.step(50);
        break;  
      default:
        break;
      } 
    }
    
   Swedagon Pagoda
   Family with People
   Mouth
   Buddha Cave
   Peep Hole
   Die fuhrerin

    // filtering out
    if(inChar == 13 || inChar == 10){
      Serial.println("HELLO");
      //      return;
    }
    else{
      //    
    } 

  }
}










