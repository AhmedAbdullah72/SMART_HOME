/*****************************************************************/
/* Author  : Ahmed Abdullh                                       */
/* SWC     : MRCC                                                */
/* Version : 1.0                                                 */
/* Date    : 1 Mar 2024                                         */
/*****************************************************************/
#ifndef MRCC_CONFIG_H_
#define MRCC_CONFIG_H_

/*
	- CLKSRC option :
			         1) HSI
			         2) HSE
			         3) PLL
*/
       #define CLKSRC  HSI
/*
   - HSE option :
                 1)_HSE_CRYSTAL
                 2)_HSE_RC
*/

       #define HSE_SRC  _HSE_CRYSTAL
/*
   - PLL option :
	            1) _HSE_PLL
                2) _HSI_PLL
 */
      #define PLL_SRC   _HSI_PLL

#endif