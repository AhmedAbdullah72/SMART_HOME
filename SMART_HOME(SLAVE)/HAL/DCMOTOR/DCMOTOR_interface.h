/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : DCMOTOR                                             */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_

//macros for Connection Type //
#define DCMOTOR_u8_4NPN_CONNECTION         0
#define DCMOTOR_u8_2NPN_2PNP_CONNECTION    1
#define DCMOTOR_u8_RELAY_CONNECTION        2

// macros for Direction //
#define DCMOTOR_u8_CLOCK_WISE       0
#define DCMOTOR_u8_COUNTER_CLOCK_WISE       1


typedef struct
{
	u8 Transistor0_PIN;
	u8 Transistor0_PORT;
	u8 Transistor1_PIN;
	u8 Transistor1_PORT;
	u8 Connection_Type;
}DCMOTOR_tstrOptions;

void DCMOTOR_vidInit(DCMOTOR_tstrOptions* Add_strOptions);

void DCMOTOR_enuRotateOneDirection(u8 Copy_u8PORT,u8 Copy_u8PIN,u8 Copy_u8Value);

void DCMOTOR_enuRotateTwoDirection(u8 Copy_u8Direction);

#endif