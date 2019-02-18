/**********************************************************************************
**                                                                               **
**                              Display 7 segments                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 6;          // donar nom al pin 6 de l’Arduino
const int ledB = 7;          // donar nom al pin 7 de l’Arduino
const int ledC = 8;          // donar nom al pin 8 de l’Arduino
const int ledD = 9;          // donar nom al pin 9 de l’Arduino
const int ledE = 10;          // donar nom al pin 10 de l’Arduino
const int ledF = 11;         // donar nom al pin 11 de l’Arduino
const int ledG = 12;         // donar nom al pin 12 de l’Arduino
const int ledP = 13;         // donar nom al pin 13 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(ledP, OUTPUT);     // definir el pin 13 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledG, LOW);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms encesos
  
   digitalWrite(ledA, LOW);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 10
  digitalWrite(ledF, LOW);    // posar a 5V el pin 11
  digitalWrite(ledG, LOW);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms apagats

  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, LOW);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledF, LOW);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms encesos

  
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 10
  digitalWrite(ledF, LOW);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms encesos

   digitalWrite(ledA, LOW);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 10
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms encesos

     digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, LOW);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 10
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms encesos

   digitalWrite(ledA, LOW);    // posar a 5V el pin 6
  digitalWrite(ledB, LOW);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 10
  digitalWrite(ledF, LOW);    // posar a 5V el pin 11
  digitalWrite(ledG, LOW);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms apagats

    digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms apagats

  
    digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledE, LOW);    // posar a 5V el pin 10
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 11
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 12
  digitalWrite(ledP, HIGH);    // posar a 5V el pin 13
  
  delay(500);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************
