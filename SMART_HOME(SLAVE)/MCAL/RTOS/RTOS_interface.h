/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : RTOS                                                */
/* Version : 1.0                                                 */
/* Date    : 2 Mar 2024                                         */
/*****************************************************************/
#ifndef RTOS_INTERFACE_H_
#define RTOS_INTERFACE_H_

//Return: ErrorState(u8)
u8 RTOS_u8CreateTask(void(*handler)(void),u8 Copy_u8Periodicity,u8 Copy_u8Priority, u8 Copy_u8FirstDelay);



void RTOS_vStart_OS(void);

#endif