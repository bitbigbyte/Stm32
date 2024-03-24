#pragma once
#include "main.h"

extern int pwm1;
extern int pwm2;
extern void limit_value(int* x, int min, int max);
extern void generate_pwm(void);