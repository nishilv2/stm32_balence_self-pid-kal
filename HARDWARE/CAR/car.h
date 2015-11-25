#ifndef __CARRUN_H
#define __CARRUN_H
#include "sys.h"

//用于实现小车电机的方向控制与调速

void left_head(void);
void left_back(void);
void right_head(void);
void right_back(void);

void left_speed(u32 speed);
void right_speed(u32 speed);
#endif