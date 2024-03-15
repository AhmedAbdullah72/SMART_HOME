/*****************************************************************/
/* Author  : Ahmed Abdullh                                      */
/* SWC     : SYSTICK                                             */
/* Version : 1.0                                                 */
/* Date    : 1 Mar 2024                                         */
/*****************************************************************/
#ifndef SYSTICK_CONFIG_H_
#define SYSTICK_CONFIG_H_

#define Freq_cpu          16000000UL

/*****************************************************************************************************************************************************************************************/

/*
 *  OPTIONS: 1- SYSTICK_INTURRPT_DISABLE
 *			 2-	SYSTICK_INTURRPT_ENABLE
 */
#define SYSTIC_INTURRPT_OPTION           SYSTICK_INTURRPT_ENABLE


/*
 *  OPTIONS: 1- SYSTICK_CLKSOURCE_AHB_DIV_8
 *			 2-	SYSTICK_CLKSOURCE_PROCESSOR_CLK_AHB
 */
#define SYSTIC_CLKSOURCE_OPTION               SYSTICK_CLKSOURCE_PROCESSOR_CLK_AHB

/*****************************************************************************************************************************************************************************************/




#endif