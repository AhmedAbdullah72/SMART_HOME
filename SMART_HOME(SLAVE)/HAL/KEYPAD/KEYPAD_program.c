/*****************************************************************/
/* Author  : Ahmed Abdullah                                      */
/* SWC     : KEYPAD                                              */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MGPIO_interface.h"
#include "KEYPAD_interface.h"
#include "KEYPAD_private.h"
#include "KEYPAD_config.h"

const  u8 row =KEYPAD_u8_ROWS_NUM ;
const u8 col = KEYPAD_u8_COLS_NUM;
 const u8 KEYPAD_au8Buttons[KEYPAD_u8_ROWS_NUM][KEYPAD_u8_COLS_NUM] =
{
		{'7','8','9','/'},
		{'4','5','6','*'},
		{'1','2','3','-'},
		{'#','0','=','+'}
};


const u8 KEYPAD_au8RowsPins[KEYPAD_u8_ROWS_NUM]=
{
		_PIN_7,
		_PIN_8,
		_PIN_9,
		_PIN_10

};

const u8 KEYPAD_au8RowsPORT[KEYPAD_u8_ROWS_NUM]=
{
		_GPIOA_PORT,
		_GPIOA_PORT,
		_GPIOA_PORT,
		_GPIOA_PORT

};

const u8 KEYPAD_au8ColsPins[KEYPAD_u8_COLS_NUM]=
{
		_PIN_5,
		_PIN_6,
		_PIN_7,
		_PIN_8

};

const u8 KEYPAD_au8ColsPORT[KEYPAD_u8_COLS_NUM]=
{
		_GPIOB_PORT,
		_GPIOB_PORT,
		_GPIOB_PORT,
		_GPIOB_PORT

};

void KEYPAD_vidInit()
{
	int i =0;
	for(i=0 ; i<4 ; i++)
		 MGPIO_voidSetPinMode(KEYPAD_au8RowsPORT[i],KEYPAD_au8RowsPins[i],_MODE_OUTPUT);

	for(i=0 ; i<4 ; i++)
	{
		MGPIO_voidSetPinMode(KEYPAD_au8ColsPORT[i],KEYPAD_au8ColsPins[i],_MODE_INPUT);
	    MGPIO_voidSetPullType(KEYPAD_au8ColsPORT[i],KEYPAD_au8ColsPins[i], _PULL_UP );
	}
}

KEYPAD_tenuErrorStatus KEYPAD_enuGetPressedKey(u8 *Add_u8KeyValue)
{
	KEYPAD_tenuErrorStatus Local_enuErrorStatus = KEYPAD_OK;
	u8 Local_u8RowIterator=0;
	u8 Local_u8ColIterator=0;
    u8 Local_u8Test=0;

    if (Add_u8KeyValue == NULL)
    	Local_enuErrorStatus=KEYPAD_NOK;
    else
    {
    	*Add_u8KeyValue=KEYPAD_u8_NOTPRESSED;
        	for(Local_u8RowIterator=0 ; Local_u8RowIterator<KEYPAD_u8_ROWS_NUM ; Local_u8RowIterator++)
	         {
        		MGPIO_voidWriteData(KEYPAD_au8RowsPORT[Local_u8RowIterator],KEYPAD_au8RowsPins[Local_u8RowIterator],LOW);
	         	for(Local_u8ColIterator=0 ; Local_u8ColIterator<KEYPAD_u8_COLS_NUM ; Local_u8ColIterator++)
	         		{
	         			    Local_u8Test = MGPIO_u8ReadData(KEYPAD_au8ColsPORT[Local_u8ColIterator],KEYPAD_au8ColsPins[Local_u8ColIterator]);
                            if(Local_u8Test==0)
                            {
                         	   *Add_u8KeyValue=KEYPAD_au8Buttons[Local_u8RowIterator][Local_u8ColIterator];
                         	   break;
                            }
	         		}
	         	MGPIO_voidWriteData(KEYPAD_au8RowsPORT[Local_u8RowIterator],KEYPAD_au8RowsPins[Local_u8RowIterator],HIGH);
	         	if(*Add_u8KeyValue!=KEYPAD_u8_NOTPRESSED)
	         		{
	         		  break;
	         		}
	         }

    }
	return Local_enuErrorStatus;
}

