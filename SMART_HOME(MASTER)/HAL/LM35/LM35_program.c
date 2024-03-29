/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : LM35                                                */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include "ADC_interface.h"
#include "LM35_interface.h"


void LM35_vidInit()
{
	ADC_voidInit();
}

u16 LM35_u16_Get_Temp(u16 copy_channel)
{

	u16 temp;
	u16 Local_u16ReadValue;
	/* Return Digital value*/
	Local_u16ReadValue = ADC_u16Read( copy_channel);
	/*
	 * Analog value = Digital value * V_step
	 * Analog value = Analog value / 1000
	 *  1c ---> 10mv
	 *   ??  ----- analog value in mv
	 *   temp = anaglo value in mv / 10 mv
	 * */
	Local_u16ReadValue = (Local_u16ReadValue * 5000UL)/4096 ;
	temp = Local_u16ReadValue / 10;
	return temp;
}
