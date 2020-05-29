/*
 * @Author: Litthins 
 * @Date: 2020-05-29 19:18:42 
 * @Last Modified by:   Litthins 
 * @Last Modified time: 2020-05-29 19:18:42 
 */

#include "main.h"

extern uint8_t Sys_Hours;
extern uint8_t Sys_Minutes;
extern uint8_t Sys_Seconds;
extern uint8_t Sys_MciroSeconds;

void RTC_Init(void);
void RTC_Set(void);
void RTC_Get(void);