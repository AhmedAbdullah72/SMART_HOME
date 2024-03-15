/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : BUZZER                                                */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MGPIO_interface.h"
#include "BUZZER_interface.h"


void BUZZER_vInit(u8 Copy_u8PortName , u8 Copy_u8PinNum)
{
	MGPIO_voidSetPinMode(Copy_u8PortName, Copy_u8PinNum, _MODE_OUTPUT);
}


void BUZZER_vTurnOn(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidWriteData(Copy_u8PortName,Copy_u8PinNum, HIGH);

}


void BUZZER_vTurnOFF(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidWriteData(Copy_u8PortName, Copy_u8PinNum, LOW);
}
