#ifndef A4988STEPPER_H
#define A4988STEPPER_H

#include <Arduino.h>

class Stepper {
	private: 
		int direction;
		int step;
		int enable;
	
	public:
		Stepper(int direction, int step, int enable);
		void begin();
		
		void driveMotor(bool invert, int speed, int steps);
		
		void enableMotor();
		void disableMotor();		
};

#endif