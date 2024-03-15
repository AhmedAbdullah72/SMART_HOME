/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : HEATER                                                */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/


#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MGPIO_interface.h"
#include "HEATER_interface.h"


void HEATER_vInit(u8 Copy_u8PortName , u8 Copy_u8PinNum)
{
	MGPIO_voidSetPinMode(Copy_u8PortName, Copy_u8PinNum, _MODE_OUTPUT);
}
/*
 *  1v ------> 0%
 *  0.75v ---> 25%
 *  0.5v ----> 50%
 *  0.25v----> 75%
 *  0v ------> 100%
 * */

void HEATER_vTurnOn(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidWriteData(Copy_u8PortName,Copy_u8PinNum, LOW);

}

void HEATER_vTurnOFF(u8 Copy_u8PortName, u8 Copy_u8PinNum)
{
	MGPIO_voidWriteData(Copy_u8PortName, Copy_u8PinNum, HIGH);
}
