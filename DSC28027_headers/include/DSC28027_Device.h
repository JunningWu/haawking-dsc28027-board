
#ifndef DSC28027_DEVICE_H
#define DSC28027_DEVICE_H

#include <stdio.h>

#define	_CPU_M0_BASE_ADDR	((uint32_t)0x00000000)
#define	_CPU_M1_BASE_ADDR	((uint32_t)0x00000800)
#define	_ADC_BASE_ADDR	    ((uint32_t)0x00001400) 
#define	_TIMER_PIE_BASE_ADDR	((uint32_t)0x00001800)
#define	_DMA_BASE_ADDR		((uint32_t)0x00001C00)
#define	_DEBUG_BASE_ADDR	((uint32_t)0x00002000)
#define	_APB_0_BASE_ADDR		((uint32_t)0x0000C000)
#define	_APB_1_BASE_ADDR		((uint32_t)0x0000E000)
#define	_L0_BASE_ADDR		((uint32_t)0x00010000)
#define	_OTP_BASE_ADDR		((uint32_t)0x007AF000)
#define	_FLASH_BASE_ADDR		((uint32_t)0x007E0000)
#define	_BOOT_ROM_BASE_ADDR	((uint32_t)0x007FC000)
#define	_CMP_BASE_ADDR		((uint32_t)0x00C000)

#define	_L0_DUAL_MAPPED_BASE_ADDR	((uint32_t)0x00010000)

/***********************************************************************
APB-0  PERIPHERALS
*************************************************************************/
#define	_COMPARATOR_BASE_ADDR	((uint32_t)0x0000C000)
#define	_PWM_BASE_ADDR		((uint32_t)0x0000C800)
#define	_ECAP_BASE_ADDR		((uint32_t)0x0000D000)
#define	_EQEP_BASE_ADDR		((uint32_t)0x0000D400)
#define	_GPIO_BASE_ADDR		((uint32_t)0x0000D800)
#define	_SYS_CTRL_BASE_ADDR	((uint32_t) 0xDC00)



/***********************************************************************
APB-1  PERIPHERALS
*************************************************************************/
#define	_SCI_BASE_ADDR		((uint32_t)0x0000E000)
#define	_I2C_BASE_ADDR		((uint32_t)0x0000E400)
#define	_SPI_BASE_ADDR		((uint32_t)0x0000E800)


/**************************************************************************
TIMER AND PIE PERIPHERALS
**************************************************************************/

#define	_TIMER_0_BASE_ADDR	(_TIMER_PIE_BASE_ADDR + 0)  
#define	_TIMER_1_BASE_ADDR	(_TIMER_PIE_BASE_ADDR + 0x10)
#define	_TIMER_2_BASE_ADDR	(_TIMER_PIE_BASE_ADDR + 0x20)


/*************************************************************************
	PIE PERIPHERALS
*************************************************************************/
#define	_PIE_BASE_ADDR	(_TIMER_PIE_BASE_ADDR + 0x100)
#define _VECTOR_PIE_BASE_ADDR  (_TIMER_PIE_BASE_ADDR + 0x200)
#define _PIE_EMU_REG_ADDR  ((uint32_t)0x1BC0)


#define _EPWM_BASE_ADDR	  ((uint32_t)0xB000)

/*************************************************************************
	EPWM PERIPHERALS
*************************************************************************/

#define	_EPWM_PER1_BASE_ADDR  _EPWM_BASE_ADDR
#define	_EPWM_PER2_BASE_ADDR  (_EPWM_PER1_BASE_ADDR + 0x400)
#define	_EPWM_PER3_BASE_ADDR  (_EPWM_PER2_BASE_ADDR + 0x400)
#define	_EPWM_PER4_BASE_ADDR  (_EPWM_PER3_BASE_ADDR + 0x400)

/*************************************************************************
	CMP PERIPHERALS
*************************************************************************/

#define	_CMP_PER1_ADDR	_CMP_BASE_ADDR
#define	_CMP_PER2_ADDR	(_CMP_PER1_ADDR + 0x80)


#define _DMA_PER1_ADDR (_DMA_BASE_ADDR)
#define _DMA_PER2_ADDR (_DMA_BASE_ADDR + 0x50)
#define _DMA_PER3_ADDR (_DMA_BASE_ADDR + 0x50)
#define _DMA_PER4_ADDR (_DMA_BASE_ADDR + 0x50)

//0x7DFFF0 -0x7DFFFF
#define _CSM_PASSWORD_BASE_ADDR	((uint32_t)0x7DFFF0)

#define _DEV_EMU_BASE_ADDR	(_SYS_CTRL_BASE_ADDR  +  0x80)

#define _FLASH_PER_REG_ADDR		((uint32_t)0x7AF800)



/*************************************************************************
	GPIO PERIPHERALS
*************************************************************************/

#define _GPIO_DATA_ADDR		(_GPIO_BASE_ADDR + 0x38)

#define _GPIO_INT_ADDR		(_GPIO_BASE_ADDR + 0x68)


#define CODE_SECTION(v) __attribute__((section(v)))




typedef 	unsigned char  Uint8;
typedef 	unsigned short int  Uint16;
typedef 	unsigned int  Uint32;
typedef		unsigned long long int	Uint64;

typedef 	signed char  Int8;
typedef 	signed short int Int16;
typedef 	signed int Int32;
typedef		signed long long int Int64;



typedef 	unsigned char  uint8;
typedef 	unsigned short int  uint16;
typedef 	unsigned int  uint32;
typedef		unsigned long long int	uint64;


typedef 	signed char  int8;
typedef 	signed short int int16;
typedef 	signed int int32;
typedef		signed long long int int64;




#define   TARGET   1
//---------------------------------------------------------------------------
// User To Select Target Device:


#define   DSP28_28027PT   1
#define   DSP28_28027DA   0


//---------------------------------------------------------------------------
// Common CPU Definitions:
//

//extern  volatile unsigned int IFR;
//extern  volatile unsigned int IER;

extern void enable_interrupt(float par);
extern void disable_interrupt(float par);



//#define  EINT   {asm(" csrs 0x300, 0x08");  asm(" csrw 0x300, 0x80");}  //enable global interrupt
#define  EINT	 enable_interrupt(1)

#define  DINT    disable_interrupt(1)



//#define  ERTM   asm(" clrc DBGM")//enable  debug   not support real-time debug
//#define  DRTM   asm(" csrs DBGM")//disable debug   not support real-time debug


#define  ERTM 

#define  DRTM 

extern Uint32 ier_set(Uint32 group,Uint32 rsvd1,Uint32 rsvd2);
extern Uint32 ier_unset(Uint32 group,Uint32 rsvd1,Uint32 rsvd2);

extern Uint32 ifr_set(Uint32 group,Uint32 rsvd1,Uint32 rsvd2);
extern Uint32 ifr_unset(Uint32 group,Uint32 rsvd1,Uint32 rsvd2);


/*************************************************************
you can use it  like this

IER_ENABLE(M_INT1|M_INT3);
IER_DISABLE(M_INT1|M_INT3);

***********************************************************************/

#define IER_ENABLE(v)   ier_set(v,1,2)
#define IER_DISABLE(v)  ier_unset(v,1,2)

#define IFR_ENABLE(v)   ifr_set(v,1,2)
#define IFR_DISABLE(v)  ifr_unset(v,1,2)




#define EALLOW  asm("csrsi 0x7C1, 0x01")  // eallow  register id is  0x7C1 ,enable write spieacl register
#define	EDIS  	asm("csrci 0x7C1, 0x01")  // disable

//#define  ESTOP0 asm(" ESTOP0") //if in debug ,set 1 dsp stop,not in debug, just a nop
#define  ESTOP0 asm(" ebreak"); //send debug call


#define M_INT1  0x0001
#define M_INT2  0x0002
#define M_INT3  0x0004
#define M_INT4  0x0008
#define M_INT5  0x0010
#define M_INT6  0x0020
#define M_INT7  0x0040
#define M_INT8  0x0080
#define M_INT9  0x0100
#define M_INT10 0x0200
#define M_INT11 0x0400
#define M_INT12 0x0800
#define M_INT13 0x1000
#define M_INT14 0x2000
#define M_DLOG  0x4000
#define M_RTOS  0x8000

#define BIT0    0x0001
#define BIT1    0x0002
#define BIT2    0x0004
#define BIT3    0x0008
#define BIT4    0x0010
#define BIT5    0x0020
#define BIT6    0x0040
#define BIT7    0x0080
#define BIT8    0x0100
#define BIT9    0x0200
#define BIT10   0x0400
#define BIT11   0x0800
#define BIT12   0x1000
#define BIT13   0x2000
#define BIT14   0x4000
#define BIT15   0x8000


//---------------------------------------------------------------------------
// Include All Peripheral Header Files:
//

#include "DSC28027_Adc.h"                // ADC Registers
#include "DSC28027_BootVars.h"           // Boot ROM Variables
#include "DSC28027_DevEmu.h"             // Device Emulation Registers
#include "DSC28027_Comp.h"               // Comparator Registers
#include "DSC28027_CpuTimers.h"          // 32-bit CPU Timers
#include "DSC28027_ECap.h"               // Enhanced Capture
#include "DSC28027_EPwm.h"               // Enhanced PWM
#include "DSC28027_Gpio.h"               // General Purpose I/O Registers
#include "DSC28027_I2c.h"                // I2C Registers
#include "DSC28027_PieCtrl.h"            // PIE Control Registers
#include "DSC28027_PieVect.h"            // PIE Vector Table
#include "DSC28027_Spi.h"                // SPI Registers
#include "DSC28027_Sci.h"                // SCI Registers
#include "DSC28027_Eqep.h"                // SCI Registers
#include "DSC28027_SysCtrl.h"            // System Control/Power Modes
#include "DSC28027_Dma.h"           // External Interrupts


#if (DSP28_28020PT||DSP28_28021PT||DSP28_28022PT||DSP28_28023PT||DSP28_28026PT||DSP28_28027PT)
#define DSP28_COMP1    1
#define DSP28_COMP2    1
#define DSP28_EPWM1    1
#define DSP28_EPWM2    1
#define DSP28_EPWM3    1
#define DSP28_EPWM4    1
#define DSP28_ECAP1    1
#define DSP28_SPIA     1
#define DSP28_SCIA     1
#define DSP28_I2CA     1
#endif  // end 2802x PT package

#if (DSP28_28020DA||DSP28_28021DA||DSP28_28022DA||DSP28_28023DA||DSP28_28026DA||DSP28_28027DA)
#define DSP28_COMP1    1
#define DSP28_COMP2    0
#define DSP28_EPWM1    1
#define DSP28_EPWM2    1
#define DSP28_EPWM3    1
#define DSP28_EPWM4    1
#define DSP28_ECAP1    1
#define DSP28_SPIA     1
#define DSP28_SCIA     1
#define DSP28_I2CA     1
#endif  // end 2802x DA package





#endif

