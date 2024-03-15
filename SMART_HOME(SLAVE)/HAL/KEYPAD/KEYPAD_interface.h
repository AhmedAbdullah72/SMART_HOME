/*****************************************************************/
/* Author  : Ahmed Abdullah                                      */
/* SWC     : KEYPAD                                              */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

typedef enum {
	KEYPAD_OK,
	KEYPAD_NOK
}KEYPAD_tenuErrorStatus;


#define KEYPAD_u8_NOTPRESSED 100

void KEYPAD_vidInit();


KEYPAD_tenuErrorStatus KEYPAD_enuGetPressedKey(u8 *Add_u8KeyValue);


#endif