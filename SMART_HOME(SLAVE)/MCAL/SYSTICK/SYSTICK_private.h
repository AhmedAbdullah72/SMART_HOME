/*****************************************************************/
/* Author  : Ahmed Abdullh                                      */
/* SWC     : SYSTICK                                             */
/* Version : 1.0                                                 */
/* Date    : 1 Mar 2024                                         */
/*****************************************************************/
#ifndef SYSTICK_PRIVATE_H_
#define SYSTICK_PRIVATE_H_

typedef struct {

	u32 STK_CTRL  ;  //control
	u32 STK_LOAD  ;  //load
	u32 STK_VAL   ;  //value
	u32 STK_CALIB ;  //calibration

}MSYSTICK_T;


#define SYSTICK_BASE_ADDRESS	     0xE000E010
#define SYSTIC		( (volatile MSYSTICK_T *) SYSTICK_BASE_ADDRESS)


//************************************************************************** for Bits Definitions ****************************************************************************************

#define SYSTICK_EN_BIT	    	       0  /* Counter enable*/
#define SYSTICK_INTURRPT_BIT	  	   1  /*SysTick exception request enable*/
#define SYSTICK_CLKSOURCE_BIT          2

//****************************************************************************** Options For the Previous 2 bits *************************************************************************
#define SYSTICK_INTURRPT_DISABLE  	    		   0
#define SYSTICK_INTURRPT_ENABLE 	    		   1

#define SYSTICK_CLKSOURCE_AHB/8	  				   0
#define	SYSTICK_CLKSOURCE_PROCESSOR_CLK_AHB		   1


#endif