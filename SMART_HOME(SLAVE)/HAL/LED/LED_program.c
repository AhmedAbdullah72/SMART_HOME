/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : LED                                                 */
/* Version : 1.0                                                 */
/* Date    : 15 Mar 2024                                         */
/*****************************************************************/
/*****************************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MGPIO_interface.h"
#include "LED_interface.h"

void LED_vLedInit(u8 Copy_u8PortName , u8 Copy_u8PinNum)
{
	MGPIO_voidSetPinMode(Copy_u8PortName, Copy_u8PinNum, _MODE_OUTPUT);
}


void LED_vLedTurnOn(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidWriteData(Copy_u8PortName,Copy_u8PinNum, HIGH);

}


void LED_vLedTurnOFF(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidWriteData(Copy_u8PortName, Copy_u8PinNum, LOW);
}


void LED_vLedToggle(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidTogglePin( Copy_u8PortName , Copy_u8PinNum);
}
