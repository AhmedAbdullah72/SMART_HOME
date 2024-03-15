/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : RTOS                                                */
/* Version : 1.0                                                 */
/* Date    : 2 Mar 2024                                         */
/*****************************************************************/
#ifndef RTOS_PRIVATE_H_
#define RTOS_PRIVATE_H_


typedef enum{
	Suspend ,
	Ready
}Task_State ;


typedef struct {

	void (*TaskHandler)(void);
	u8 periodicity ;
	u8 firstdelay;
	Task_State Tstate;
}Task;


#endif