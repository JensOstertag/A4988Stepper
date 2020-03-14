/*
 * 
 *     Stepper Motor Library
 *     Developed by Jens Ostertag
 *     
 *     Ability to drive stepper motors with A4988 driver board
 *     
 *     © 2020 Jens Ostertag
 *     
 */

#include <A4988Stepper.h>

#define direction 3
#define step 4
#define enable 5

#define stepsPerRevolution 200

Stepper stepper(direction, step, enable);               // Define pins of A4988 board

void setup() {
  Serial.begin(9600);
  stepper.begin();                                      // Defines pins as OUTPUTs
}

void loop() {
  stepper.enableMotor();                                // Enables the motor
  stepper.driveMotor(false, 500, stepsPerRevolution);   // Turns the motor at speed 500 one revolution clockwise
  stepper.disableMotor();                               // Disables the motor
  
  delay(10000);                                         // Wait 10 seconds
  
  stepper.enableMotor();                                // Enables the motor
  stepper.driveMotor(true, 500, stepsPerRevolution);    // Turns the motor at speed 500 one revolution counter-clockwise
  stepper.disableMotor();                               // Disables the motor
  
  delay(10000);                                         // Wait 10 seconds
}
