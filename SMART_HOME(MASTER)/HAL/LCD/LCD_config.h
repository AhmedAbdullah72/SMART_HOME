/*****************************************************************/
/* Author  : Ahmed Abdullah                                       */
/* SWC     : LCD                                                 */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

//************ OPTIONS ****************//
/*
 1- eight_bit_mode 
 2- four_bit_mode

*/

#define four_bit_mode


//  RS PIN //
#define LCD_u8_RS_PORT				_GPIOA_PORT
#define LCD_u8_RS_PIN				_PIN_6

// RW PIN //
#define LCD_u8_RW_PORT				_GPIOA_PORT
#define LCD_u8_RW_PIN				_PIN_5

// E PIN //
#define LCD_u8_E_PORT				_GPIOA_PORT
#define LCD_u8_E_PIN				_PIN_4

//DO PIN //
#define LCD_u8_D0_PORT				_GPIOA_PORT
#define LCD_u8_D0_PIN				_PIN_0

//D1 PIN //
#define LCD_u8_D1_PORT				_GPIOA_PORT
#define LCD_u8_D1_PIN				_PIN_0

//D2 PIN //
#define LCD_u8_D2_PORT				_GPIOA_PORT
#define LCD_u8_D2_PIN				_PIN_0

//D3 PIN //
#define LCD_u8_D3_PORT				_GPIOA_PORT
#define LCD_u8_D3_PIN				_PIN_0

//D4 PIN //
#define LCD_u8_D4_PORT				_GPIOA_PORT
#define LCD_u8_D4_PIN				_PIN_3

//D5 PIN //
#define LCD_u8_D5_PORT				_GPIOA_PORT
#define LCD_u8_D5_PIN				_PIN_2

//D6 PIN //
#define LCD_u8_D6_PORT				_GPIOA_PORT
#define LCD_u8_D6_PIN				_PIN_1

//D7 PIN //
#define LCD_u8_D7_PORT				_GPIOA_PORT
#define LCD_u8_D7_PIN				_PIN_0



#define LCD_u8_DATA_LENGTH_MODE         LCD_u8_4_BIT_MODE
#define LCD_u8_NUMBER_OF_LINES          LCD_u8_TWO_LINE
#define LCD_u8_FONT_MODE                LCD_u8_FONT_5_7

//----------------------------------------options----------------------------------------//

/* Data Length */

#define LCD_u8_8_BIT_MODE       0X10
#define LCD_u8_4_BIT_MODE       0X00


/* Number Of Lines */

#define LCD_u8_ONE_LINE         0x00
#define LCD_u8_TWO_LINE         0x08


 /* CHAR FONT */
#define LCD_u8_FONT_5_7			0X00
#define LCD_u8_FONT_5_10		0X04


#endif