/*****************************************************************/
/* Author  : Ahmed Abdullah                                               */
/* SWC     : ADC                                                 */
/* Version : 1.0                                                 */
/* Date    : 5 Mar 2024                                         */
/*****************************************************************/
#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

typedef struct{
	u32 SR;
	u32 CR1;
	u32 CR2;
	u32 SMPR1;
	u32 SMPR2;
	u32 JOFRx1;
	u32 JOFRx2;
	u32 HTR;
	u32 LTR;
	u32 SQR1;
	u32 SQR2;
	u32 SQR3;
	u32 JSQR;
	u32 JDR1;
	u32 JDR2;
	u32 JDR3;
	u32 DR;
}ADC_t;

#define ADC_BASE_ADDRESS 0x40012000
#define ADC    ((volatile ADC_t *)ADC_BASE_ADDRESS)
#define	ADC_CCR (*(volatile u32 *)(ADC_BASE_ADDRESS+0x304))
#define RES0	24
#define RES1	25
#define ADON	0
#define SWSTART 30
#define EOC		1

#endif