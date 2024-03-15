/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : LED                                                 */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

void LED_vLedInit(u8 Copy_u8PortName , u8 Copy_u8PinNum);

void LED_vLedTurnOn(u8 Copy_u8PortName, u8 Copy_u8PinNum);


void LED_vLedTurnOFF(u8 Copy_u8PortName, u8 Copy_u8PinNum);

void LED_vLedToggle(u8 Copy_u8PortName, u8 Copy_u8PinNum);


#endif