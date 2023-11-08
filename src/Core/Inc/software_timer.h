/*
 * software_timer.h
 *
 *  Created on: Nov 8, 2023
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIMER_CYCLE		10

void timer_run();
void setTimer0(int duration);
unsigned char getTimer0Flag();

void setTimer1(int duration);
unsigned char getTimer1Flag();

#endif /* INC_SOFTWARE_TIMER_H_ */
