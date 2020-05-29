/*
 * @Author: Litthins 
 * @Date: 2020-05-29 19:18:16 
 * @Last Modified by:   Litthins 
 * @Last Modified time: 2020-05-29 19:18:16 
 */

#include "Bee_SH.h"
#include "stdio.h"

#include "rtc.h"
#include "uart.h"

const char Bee_Msg_Welcome[]         = "\033[47m\033[34m/-------------------------------------------/\033[0m\n\r"
                                       "\033[47m\033[34m/--------- This is Bee-SH,Welcome! ---------/\033[0m\n\r"
                                       "\033[47m\033[34m/-------------- Version 0.0.1 --------------/\033[0m\n\r"
                                       "\033[47m\033[34m/-------------------------------------------/\033[0m\n\r"; 
const char Bee_Msg_SysInit_OK[]      = "\033[36m--System Initialization Finished!\033[0m";
const char Bee_Msg_Entering_Main[]   = "\033[36m--Entering Main() Function!\033[0m";
const char Bee_Msg_Main_Top[]        = "\033[36m--Main() Function Again!\033[0m";

int fputc(int ch, FILE *f)
{
  //UART_Transmit(uint8_t *);
  return ch;
}

void BeeSH_Init(void)
{
    UART3_Init();
    RTC_Init();
}

void BeeSH_Rx(void)
{
    //Do something
}

void BeeSH_Tx(char *Bee_Msg,CrLf_State Clt)
{
    RTC_Get();
    printf("%s",Bee_Msg);
    if(1==Clt)printf("\n\r");
    if(2==Clt)printf("\033[33m[SysTime:%d:%d:%d:%d]\n\r\033[0m",Sys_Hours,Sys_Minutes,Sys_Seconds,Sys_MciroSeconds);
}