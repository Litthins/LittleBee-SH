/*
 * @Author: Litthins 
 * @Date: 2020-05-29 19:17:20 
 * @Last Modified by: Litthins
 * @Last Modified time: 2020-05-29 19:19:18
 */

#include "main.h"
#include "Bee_SH.h"

int main(void)
{
	BeeSH_Init();

  BeeSH_Tx((char *)Bee_Msg_Welcome,No_CrLf);
  BeeSH_Tx((char *)Bee_Msg_SysInit_OK,CrLf_Time);
  BeeSH_Tx((char *)Bee_Msg_Entering_Main,CrLf_Time);

  while (1)
  {
    BeeSH_Tx((char *)Bee_Msg_Main_Top,CrLf_Time);
  }
}