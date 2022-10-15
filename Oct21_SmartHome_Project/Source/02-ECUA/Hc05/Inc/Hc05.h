/*
 * Hc05.h
 *
 * Created: 12/10/2022 04:12:14
 *  Author: Malek Elsaka
 */ 


#ifndef HC05_H_
#define HC05_H_


/*********************************_INCLUDES_******************************/
#include "Hc05Cfg.h"
#include "Uart.h"
#include <util/delay.h>
/***********************************_MACOS_*******************************/

/********************************_PROTOTYPES_*****************************/
void Hc05_Init(void);
void Hc05_Send(u8);
void Hc05_SendString(u8*);
u8 Hc05_Rec(void);

#endif /* HC05_H_ */
