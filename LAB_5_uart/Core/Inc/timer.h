/*
 * timer.h
 *
 *  Created on: Nov 29, 2024
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#include "main.h"

extern int	timer1_flag;

void setTimer(int index, int counter);
void timerRun();
int isTimeExceed(int index);




#endif /* INC_TIMER_H_ */
