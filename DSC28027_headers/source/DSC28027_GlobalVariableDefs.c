
#include "DSC28027_Device.h"     // DSP2802x Headerfile Include File


volatile struct ECAP_REGS  *const P_ECap1Regs = (volatile struct ECAP_REGS  *) (_ECAP_BASE_ADDR);
volatile struct ECAP_REGS  CODE_SECTION(".ECap1Regs")  ECap1Regs;


volatile struct CPUTIMER_REGS *const  P_CpuTimer0Regs  = (volatile struct CPUTIMER_REGS  *) (_TIMER_0_BASE_ADDR);
volatile struct CPUTIMER_REGS *const  P_CpuTimer1Regs  = (volatile struct CPUTIMER_REGS  *) (_TIMER_1_BASE_ADDR);
volatile struct CPUTIMER_REGS *const  P_CpuTimer2Regs  = (volatile struct CPUTIMER_REGS  *) (_TIMER_2_BASE_ADDR);

volatile struct CPUTIMER_REGS CODE_SECTION(".CpuTimer0Regs")CpuTimer0Regs;
volatile struct CPUTIMER_REGS CODE_SECTION(".CpuTimer1Regs")CpuTimer1Regs;
volatile struct CPUTIMER_REGS CODE_SECTION(".CpuTimer2Regs")CpuTimer2Regs;


volatile struct EQEP_REGS *const P_EQep1Regs = (volatile struct EQEP_REGS  *) (_EQEP_BASE_ADDR);
volatile struct EQEP_REGS  CODE_SECTION(".EQep1Regs")EQep1Regs;


volatile struct ADC_REGS *const P_AdcRegs = (volatile struct ADC_REGS  *) (_ADC_BASE_ADDR); 
volatile struct ADC_REGS CODE_SECTION(".AdcRegs") AdcRegs; 



volatile struct ADC_RESULT_REGS *const P_AdcResult = (volatile struct ADC_RESULT_REGS  *) (_ADC_BASE_ADDR+0x9c); 
volatile struct ADC_RESULT_REGS CODE_SECTION(".AdcResult")   AdcResult; 


volatile struct PIE_CTRL_REGS *const P_PieCtrlRegs  =(volatile struct PIE_CTRL_REGS  *)  (_PIE_BASE_ADDR); 
volatile struct PIE_CTRL_REGS CODE_SECTION(".PieCtrlRegs") PieCtrlRegs; 

volatile struct XINTRUPT_REGS *const  P_XIntruptRegs =(volatile struct XINTRUPT_REGS  *) (_VECTOR_PIE_BASE_ADDR  +  0x68);
volatile struct XINTRUPT_REGS CODE_SECTION(".XIntruptRegs")  XIntruptRegs;



volatile struct PIE_VECT_TABLE *const P_PieVectTable =(volatile struct PIE_VECT_TABLE  *)  (_VECTOR_PIE_BASE_ADDR);
volatile struct PIE_VECT_TABLE CODE_SECTION(".PieVectTable") PieVectTable ;



volatile struct SPI_REGS *const P_SpiaRegs = (volatile struct SPI_REGS   *)  (_SPI_BASE_ADDR);
volatile struct SPI_REGS CODE_SECTION(".SpiaRegs") SpiaRegs ;


volatile struct SCI_REGS *const P_SciaRegs  = (volatile struct SCI_REGS   *)  (_SCI_BASE_ADDR);
volatile struct SCI_REGS CODE_SECTION(".SciaRegs")  SciaRegs;


volatile struct I2C_REGS *const P_I2caRegs = (volatile struct I2C_REGS   *)  (_I2C_BASE_ADDR) ;
volatile struct I2C_REGS CODE_SECTION(".I2caRegs") I2caRegs;



volatile struct EPWM_REGS *const P_EPwm1Regs =  (volatile struct EPWM_REGS   *)(_EPWM_PER1_BASE_ADDR);
volatile struct EPWM_REGS *const P_EPwm2Regs =  (volatile struct EPWM_REGS   *)(_EPWM_PER2_BASE_ADDR);
volatile struct EPWM_REGS *const P_EPwm3Regs =  (volatile struct EPWM_REGS   *)(_EPWM_PER3_BASE_ADDR);
volatile struct EPWM_REGS *const P_EPwm4Regs =  (volatile struct EPWM_REGS   *)(_EPWM_PER4_BASE_ADDR);

volatile struct EPWM_REGS CODE_SECTION(".EPwm1Regs") EPwm1Regs;
volatile struct EPWM_REGS CODE_SECTION(".EPwm2Regs") EPwm2Regs;
volatile struct EPWM_REGS CODE_SECTION(".EPwm3Regs") EPwm3Regs;
volatile struct EPWM_REGS CODE_SECTION(".EPwm4Regs") EPwm4Regs;



volatile struct GPIO_CTRL_REGS *const P_GpioCtrlRegs = (volatile struct GPIO_CTRL_REGS   *)(_GPIO_BASE_ADDR);
volatile struct GPIO_CTRL_REGS CODE_SECTION(".GpioCtrlRegs") GpioCtrlRegs;



volatile struct GPIO_DATA_REGS *const P_GpioDataRegs = (volatile struct GPIO_DATA_REGS   *)(_GPIO_DATA_ADDR);
volatile struct GPIO_DATA_REGS CODE_SECTION(".GpioDataRegs") GpioDataRegs;


volatile struct GPIO_INT_REGS *const P_GpioIntRegs = (volatile struct GPIO_INT_REGS   *)(_GPIO_INT_ADDR);
volatile struct GPIO_INT_REGS CODE_SECTION(".GpioIntRegs") GpioIntRegs;


volatile struct SYS_CTRL_REGS  *const P_SysCtrlRegs = (volatile struct SYS_CTRL_REGS   *)(_SYS_CTRL_BASE_ADDR) ;
volatile struct SYS_CTRL_REGS  CODE_SECTION(".SysCtrlRegs") SysCtrlRegs;


volatile struct COMP_REGS  *const P_Comp1Regs  =  (volatile struct COMP_REGS   *)(_CMP_PER1_ADDR) ;
volatile struct COMP_REGS  *const P_Comp2Regs =   (volatile struct COMP_REGS   *)(_CMP_PER2_ADDR) ;

volatile struct COMP_REGS   CODE_SECTION(".Comp1Regs") Comp1Regs;
volatile struct COMP_REGS   CODE_SECTION(".Comp2Regs") Comp2Regs;


volatile  struct DMA_REGS *const  P_DmaRegs =  (volatile struct DMA_REGS   *)(_DMA_BASE_ADDR);
volatile  struct DMA_REGS CODE_SECTION(".DmaRegs") DmaRegs;



volatile struct FLASH_REGS  *const  P_FlashRegs =  (volatile struct FLASH_REGS   *)(_FLASH_PER_REG_ADDR) ;
volatile struct FLASH_REGS  CODE_SECTION(".FlashRegs") FlashRegs;



volatile struct CSM_PWL  *const P_CsmPwl =  (volatile struct CSM_PWL   *)(_CSM_PASSWORD_BASE_ADDR);



volatile struct DEV_EMU_REGS  *const P_DevEmuRegs = (volatile struct DEV_EMU_REGS *)(_DEV_EMU_BASE_ADDR);
volatile struct DEV_EMU_REGS  CODE_SECTION(".DevEmuRegs") DevEmuRegs;


volatile struct PieEmu_REGS *const P_PieEmuRegs  = (struct PieEmu_REGS *const)(_PIE_EMU_REG_ADDR);
volatile struct PieEmu_REGS CODE_SECTION(".PieEmuRegs") PieEmuRegs;


/*


volatile struct PARTID_REGS PartIdRegs;

volatile struct SYS_PWR_CTRL_REGS SysPwrCtrlRegs;



Uint16 EmuKey;

Uint16 EmuBMode;

Uint32 Flash_CPUScaleFactor;

void (*Flash_CallbackPtr) (void);

*/




//===========================================================================
// End of file.
//===========================================================================



