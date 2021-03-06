
#include <Stepper.h>
#include <Bridge.h>
#include <HttpClient.h>

const int stepsPerRev = 200;
Stepper myStepper(stepsPerRev, 8, 9, 10, 11);

int value = 0;
int inByte = 0;
int curPhoto = '1'; // which photo is currently on display?

// Hold switch and lights to signal state of Yun
const int holdSwitch = 7;
int holdSwitchState = 0;

int greenLED = 3;
int redLED = 4;


void setup() {
  Bridge.begin();
  Serial.begin(9600);
  myStepper.setSpeed(40);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(holdSwitch, INPUT);

//  while (!Serial);
}

void loop() {
  int holdSwitchState = digitalRead(holdSwitch);
  Serial.println(holdSwitch);
  if (holdSwitchState == HIGH) {
    // do nothing
    //Serial.println("hold is on");
  }
  if (holdSwitchState == LOW) {
    //Serial.println("hold is off");

   incoming();

  }
}

void incoming() {
  HttpClient client;

  client.get("http://166.78.159.225:8080/selected/");

  while (client.available()) {
    char inChar = client.read();
    Serial.print(inChar);

    /// initial connection established
    /*  if (inChar == '111') {
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

    */

    // Tombraider Scene Tree
    if (inChar == '1') {
      switch (curPhoto) {
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
      switch (curPhoto) {
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
    // Fireworks
    if (inChar == '3') {
      switch (curPhoto) {
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
      switch (curPhoto) {
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
      switch (curPhoto) {
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
      switch (curPhoto) {
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
      switch (curPhoto) {
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
      switch (curPhoto) {
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
      switch (curPhoto) {
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

    // Ayuttaya
    if (inChar == '10') {
      switch (curPhoto) {
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


    // Cambodia Guide Walking
    if (inChar == '11') {
      switch (curPhoto) {
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


    // Trucks and Balloons
    if (inChar == '12') {
      switch (curPhoto) {
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


    // JBC ARC Tah Prom
    if (inChar == '13') {
      switch (curPhoto) {
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


    // Face
    if (inChar == '14') {
      switch (curPhoto) {
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


    //    Hehe Rowing
    if (inChar == '15') {
      switch (curPhoto) {
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


    //   Swedagon Pagoda
    if (inChar == '16') {
      switch (curPhoto) {
        case '1':
          myStepper.step(50);
          break;
        case '2':
          myStepper.step(60);
          break;
        case '3':
          myStepper.step(70);
          break;
        case '4':
          myStepper.step(80);
          break;
        case '5':
          myStepper.step(90);
          break;
        case '6':
          myStepper.step(100);
          break;
        case '7':
          myStepper.step(110);
          break;
        case '8':
          myStepper.step(120);
          break;
        case '9':
          myStepper.step(130);
          break;
        case '10':
          myStepper.step(140);
          break;
        case '11':
          myStepper.step(150);
          break;
        case '12':
          myStepper.step(160);
          break;
        case '13':
          myStepper.step(170);
          break;
        case '14':
          myStepper.step(180);
          break;
        case '15':
          myStepper.step(190);
          break;
        case '16':
          myStepper.step(200);
          break;
        case '17':
          myStepper.step(10);
          break;
        case '18':
          myStepper.step(20);
          break;
        case '19':
          myStepper.step(30);
          break;
        case '20':
          myStepper.step(40);
          break;
        default:
          break;
      }
    }

    //Family with People
    if (inChar == '17') {
      switch (curPhoto) {
        case '1':
          myStepper.step(40);
          break;
        case '2':
          myStepper.step(50);
          break;
        case '3':
          myStepper.step(60);
          break;
        case '4':
          myStepper.step(70);
          break;
        case '5':
          myStepper.step(80);
          break;
        case '6':
          myStepper.step(90);
          break;
        case '7':
          myStepper.step(100);
          break;
        case '8':
          myStepper.step(110);
          break;
        case '9':
          myStepper.step(120);
          break;
        case '10':
          myStepper.step(130);
          break;
        case '11':
          myStepper.step(140);
          break;
        case '12':
          myStepper.step(150);
          break;
        case '13':
          myStepper.step(160);
          break;
        case '14':
          myStepper.step(170);
          break;
        case '15':
          myStepper.step(180);
          break;
        case '16':
          myStepper.step(190);
          break;
        case '17':
          myStepper.step(200);
          break;
        case '18':
          myStepper.step(10);
          break;
        case '19':
          myStepper.step(20);
          break;
        case '20':
          myStepper.step(30);
          break;
        default:
          break;
      }
    }

    //Mouth
    if (inChar == '18') {
      switch (curPhoto) {
        case '1':
          myStepper.step(30);
          break;
        case '2':
          myStepper.step(40);
          break;
        case '3':
          myStepper.step(50);
          break;
        case '4':
          myStepper.step(60);
          break;
        case '5':
          myStepper.step(70);
          break;
        case '6':
          myStepper.step(80);
          break;
        case '7':
          myStepper.step(90);
          break;
        case '8':
          myStepper.step(100);
          break;
        case '9':
          myStepper.step(110);
          break;
        case '10':
          myStepper.step(120);
          break;
        case '11':
          myStepper.step(130);
          break;
        case '12':
          myStepper.step(140);
          break;
        case '13':
          myStepper.step(150);
          break;
        case '14':
          myStepper.step(160);
          break;
        case '15':
          myStepper.step(170);
          break;
        case '16':
          myStepper.step(180);
          break;
        case '17':
          myStepper.step(190);
          break;
        case '18':
          myStepper.step(200);
          break;
        case '19':
          myStepper.step(10);
          break;
        case '20':
          myStepper.step(20);
          break;
        default:
          break;
      }
    }


    //Peep Hole
    if (inChar == '19') {
      switch (curPhoto) {
        case '1':
          myStepper.step(10);
          break;
        case '2':
          myStepper.step(20);
          break;
        case '3':
          myStepper.step(40);
          break;
        case '4':
          myStepper.step(50);
          break;
        case '5':
          myStepper.step(60);
          break;
        case '6':
          myStepper.step(70);
          break;
        case '7':
          myStepper.step(80);
          break;
        case '8':
          myStepper.step(90);
          break;
        case '9':
          myStepper.step(100);
          break;
        case '10':
          myStepper.step(110);
          break;
        case '11':
          myStepper.step(120);
          break;
        case '12':
          myStepper.step(130);
          break;
        case '13':
          myStepper.step(140);
          break;
        case '14':
          myStepper.step(150);
          break;
        case '15':
          myStepper.step(160);
          break;
        case '16':
          myStepper.step(170);
          break;
        case '17':
          myStepper.step(180);
          break;
        case '18':
          myStepper.step(190);
          break;
        case '19':
          myStepper.step(200);
          break;
        case '20':
          myStepper.step(10);
          break;
        default:
          break;
      }
    }

    //Die fuhrerin
    if (inChar == '20') {
      switch (curPhoto) {
        case '1':
          myStepper.step(10);
          break;
        case '2':
          myStepper.step(20);
          break;
        case '3':
          myStepper.step(30);
          break;
        case '4':
          myStepper.step(40);
          break;
        case '5':
          myStepper.step(50);
          break;
        case '6':
          myStepper.step(60);
          break;
        case '7':
          myStepper.step(70);
          break;
        case '8':
          myStepper.step(80);
          break;
        case '9':
          myStepper.step(90);
          break;
        case '10':
          myStepper.step(100);
          break;
        case '11':
          myStepper.step(110);
          break;
        case '12':
          myStepper.step(120);
          break;
        case '13':
          myStepper.step(130);
          break;
        case '14':
          myStepper.step(140);
          break;
        case '15':
          myStepper.step(150);
          break;
        case '16':
          myStepper.step(160);
          break;
        case '17':
          myStepper.step(170);
          break;
        case '18':
          myStepper.step(180);
          break;
        case '19':
          myStepper.step(190);
          break;
        case '20':
          myStepper.step(200);
          break;
        default:
          break;

      }
      Serial.flush();
    }
  }
}
/*

// filtering out
if (inChar == 13 || inChar == 10) {
  Serial.println("HELLO");
  //      return;
}
else {
  //
}


}

*/








