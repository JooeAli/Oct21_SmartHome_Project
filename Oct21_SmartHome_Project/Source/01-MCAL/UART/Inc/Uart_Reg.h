/*
 * Uart_Reg.h
 *
 * Created: 9/10/2022 02:12:29
 *  Author: Malek Elsaka
 */

#ifndef SOURCE_01_MCAL_UART_INC_UART_REG_H_
#define SOURCE_01_MCAL_UART_INC_UART_REG_H_

#define UART_UDR_REG       		(*(u8*)0x2C)
#define UART_UBRRH_REG       	(*(u8*)0x40)
#define UART_UBRRL_REG			(*(u8*)0x29)
#define UART_UCSRA_REG			(*(u8*)0x2B)
#define UART_UCSRB_REG			(*(u8*)0x2A)
#define UART_UCSRC_REG			(*(u8*)0x40)


#endif /* SOURCE_01_MCAL_UART_INC_UART_REG_H_ */
