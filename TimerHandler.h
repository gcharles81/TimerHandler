/*
  TimerHandler_handler.h - TimerHandler_handler library for timers - implementation
  Copyright (c) 2018 Charles Galea.  All right reserved.
*/

// ensure this library description is only included once
#ifndef TimerHandler_h
#define TimerHandler_h



#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#include "WConstants.h"
#endif





typedef struct {
	int Hour_On;
	int Min_On;
	int Hour_Off;
	int Min_off;
	int duration;
	boolean State;
} Timer;
/*
typedef struct {
	"ON";
	"OFF";
	"DIABLED";
	
}STATUS;

*/

class TimerHandler{
  public:
  
void Check_time(int hour , int min);
boolean Timer_ON(int time ,Timer);// just test boolean to be updated later 
  
  
  private:
  
  
  };

#endif

