

#ifndef DSC28027_SYS_CTRL_H
#define DSC28027_SYS_CTRL_H

#ifdef __cplusplus
extern "C" {
#endif

//---------------------------------------------------------------------------
// System Control Individual Register Bit Definitions:
//


// XCLKOUT Control
struct XCLK_BITS   {    // bits  description
   Uint32 XCLKOUTDIV:2; // 1:0   XCLKOUT Divide Ratio
   Uint32 rsvd1:3;      // 4:2   reserved
   Uint32 rsvd2:1;      // 5     reserved
   Uint32 XCLKINSEL:1;  // 6     XCLKIN Source Select bit
   Uint32 rsvd3:9;     // 15:7   reserved
   Uint32 rsvd4:16;
};

union XCLK_REG {
   Uint32                     all;
   struct XCLK_BITS           bit;
};

// PLL Status Register
struct PLLSTS_BITS   {    // bits  description
   Uint32 PLLLOCKS:1;     // 0     PLL lock status
   Uint32 rsvd1:1;        // 1     reserved
   Uint32 PLLOFF:1;       // 2     PLL off bit
   Uint32 MCLKSTS:1;      // 3     Missing clock status bit
   Uint32 MCLKCLR:1;      // 4     Missing clock clear bit
   Uint32 OSCOFF:1;       // 5     Oscillator clock off
   Uint32 MCLKOFF:1;      // 6     Missing clock detect
   Uint32 DIVSEL:2;       // 8:7   Divide select (/4 default)
   Uint32 rsvd2:6;        // 14:9  reserved
   Uint32 NORMRDYE:1;     // 15    VREG NORMRDY enable bit
   Uint32 rsvd:16;
};

union PLLSTS_REG {
   Uint32                     all;
   struct PLLSTS_BITS         bit;
};

// Clock Control Register
struct CLKCTL_BITS   {        // bits  description
   Uint32 OSCCLKSRCSEL:1;     // 0     Oscillator clock source select bit
   Uint32 OSCCLKSRC2SEL:1;    // 1     Oscillator 2 clock source select bit
   Uint32 WDCLKSRCSEL:1;      // 2     Watchdog clock source select bit
   Uint32 TMR2CLKSRCSEL:2;    // 4:3   CPU timer 2 clock source select bit
   Uint32 TMR2CLKPRESCALE:3;  // 7:5   CPU timer 2 clock pre-scale value
   Uint32 INTOSC1OFF:1;       // 8     Internal oscillator off bit
   Uint32 INTOSC1HALTI:1;     // 9     Internal oscillator 1 halt mode ignore bit
   Uint32 INTOSC2OFF:1;       // 10    Internal oscillator 2 off bit
   Uint32 INTOSC2HALTI:1;     // 11    Internal oscillator 2 halt mode ignore bit
   Uint32 WDHALTI:1;          // 12    Watchdog halt mode ignore bit
   Uint32 XCLKINOFF:1;        // 13    XCLKIN off bit
   Uint32 XTALOSCOFF:1;       // 14    Crystal (External) oscillator off bit
   Uint32 NMIRESETSEL:1;      // 15    NMI reset select bit
   Uint32 rsvd2:16;
};

union CLKCTL_REG {
   Uint32                     all;
   struct CLKCTL_BITS         bit;
};

// Internal Oscillator 1 Trim
struct INTOSC1TRIM_BITS   {    // bits  description
   Uint32 rsvd0:8;        // 7:0   8-bit rsvd
   Uint32 rsvd1:1;             // 8     reserved
   Uint32 FINETRIM:5;          // 9:13  6-bit fine trim value
   Uint32 rsvd2:2;             // 15-16    reserved
   Uint32 rsvd3:16;
};

union INTOSC1TRIM_REG {
   Uint32                     all;
   struct INTOSC1TRIM_BITS    bit;
};

// Internal Oscillator 2 Trim
struct INTOSC2TRIM_BITS   {    // bits  description
   Uint32 COARSETRIM:8;        // 7:0   8-bit coarse trim value
   Uint32 rsvd1:1;             // 8     reserved
   Uint32 FINETRIM:6;          // 9:14  6-bit fine trim value
   Uint32 rsvd2:1;             // 15    reserved
   Uint32 rsvd:16;
};

union INTOSC2TRIM_REG {
   Uint32                     all;
   struct INTOSC2TRIM_BITS    bit;
};

// Low speed peripheral clock register bit definitions:
struct LOSPCP_BITS  {   // bits  description
   Uint32 LSPCLK:3;     // 2:0   Rate relative to SYSCLKOUT
   Uint32 rsvd1:13;     // 15:3  reserved
   Uint32 rsvd2:16;
};

union LOSPCP_REG {
   Uint32                     all;
   struct LOSPCP_BITS         bit;
};

// Peripheral clock control register 0 bit definitions:
struct PCLKCR0_BITS  {  // bits  description
   Uint32 HRPWMENCLK:1; // 0     Enable low speed clk to HRPWM
   Uint32 rsvd1:1;      // 1     reserved
   Uint32 TBCLKSYNC:1;  // 2     ETWPM Module TBCLK enable/sync
   Uint32 ADCENCLK:1;   // 3     Enable high speed clk to ADC
   Uint32 I2CAENCLK:1;  // 4     Enable SYSCLKOUT to I2C-A
   Uint32 rsvd2:3;      // 7:5   reserved
   Uint32 SPIAENCLK:1;  // 8     Enable low speed clk to SPI-A
   Uint32 rsvd3:1;      // 9     reserved
   Uint32 SCIAENCLK:1;  // 10    Enable low speed clk to SCI-A
   Uint32 rsvd4:5;      // 15:11 reserved
   Uint32 rsvd5:16;
};

union PCLKCR0_REG {
   Uint32                     all;
   struct PCLKCR0_BITS        bit;
};

// Peripheral clock control register 1 bit definitions:
struct PCLKCR1_BITS  {    // bits  description
   Uint32 EPWM1ENCLK:1;   // 0     Enable SYSCLKOUT to EPWM1
   Uint32 EPWM2ENCLK:1;   // 1     Enable SYSCLKOUT to EPWM2
   Uint32 EPWM3ENCLK:1;   // 2     Enable SYSCLKOUT to EPWM3
   Uint32 EPWM4ENCLK:1;   // 3     Enable SYSCLKOUT to EPWM4
   Uint32 rsvd1:4;        // 7:4   reserved
   Uint32 ECAP1ENCLK:1;   // 8     Enable SYSCLKOUT to ECAP1
   Uint32 rsvd2:5;        // 13:9  reserved
   Uint32 EQEP1ENCLK:1;	  // 14  enable eqep
   Uint32 rsvd3:17;
};

union PCLKCR1_REG {
   Uint32                     all;
   struct PCLKCR1_BITS        bit;
};

// Peripheral clock control register 3 bit definitions:
struct PCLKCR3_BITS  {       // bits  description
   Uint32 COMP1ENCLK:1;      // 0     Enable SYSCLKOUT to COMP1
   Uint32 COMP2ENCLK:1;      // 1     Enable SYSCLKOUT to COMP2
   Uint32 rsvd1:1;           // 2     reserved
   Uint32 rsvd2:5;           // 7:3   reserved
   Uint32 CPUTIMER0ENCLK:1;  // 8     Enable SYSCLKOUT to CPUTIMER0
   Uint32 CPUTIMER1ENCLK:1;  // 9     Enable SYSCLKOUT to CPUTIMER1
   Uint32 CPUTIMER2ENCLK:1;  // 10    Enable SYSCLKOUT to CPUTIMER2
   Uint32 DMAENCLK:1;		 // 11  ENABLE 	SYSCLKOUT to DMA
   Uint32 rsvd3:1;           // 12 reserved
   Uint32 GPIOINENCLK:1;     // 13    Enable SYSCLKOUT to GPIO
   Uint32 rsvd4:2;           // 15:14
   Uint32 rsvd5:16;
};

union PCLKCR3_REG {
   Uint32              all;
   struct PCLKCR3_BITS bit;
};

// PLL control register bit definitions:
struct PLLCR_BITS {      // bits  description
   Uint32 DIV:4;         // 0-3   Set clock ratio for the PLL
   Uint32 DIVN:1;		//	4		Pre-divider of reference clock(CLKIN)
   Uint32 DIVM:2;		//	5-6		VCO output divider control signal
   Uint32 rsvd1:25;     
};

union PLLCR_REG {
   Uint32             all;
   struct PLLCR_BITS  bit;
};

// Low Power Mode 0 control register bit definitions:
struct LPMCR0_BITS {     // bits  description
   Uint32 LPM:2;         // 1:0   Set the low power mode
   Uint32 QUALSTDBY:6;   // 7:2   Qualification
   Uint32 rsvd1:7;       // 14:8  reserved
   Uint32 WDINTE:1;      // 15    Enables WD to wake the device from STANDBY
   Uint32 rsvd2:16;
};

union LPMCR0_REG {
   Uint32              all;
   struct LPMCR0_BITS  bit;
};


//---------------------------------------------------------------------------
// System Power Control Registers:
//

// BOR configuration register bit definitions:
struct BORCFG_BITS {     // bits  description
   Uint32 BORENZ:1;      // 0     BOR enable active low bit
   Uint32 rsvd1:15;      // 15:1  reserved
   
};

union BORCFG_REG {
   Uint32              all;
   struct BORCFG_BITS  bit;
};

struct SYS_PWR_CTRL_REGS {
    union    BORCFG_REG   BORCFG;       // 0: BOR Configuration Register
};

struct SCSR_BITS 
{
	Uint32  WDOVERRIDE:1;//watchdog override
	Uint32  WDENINT:1;//watchdog interrupt enable
	Uint32  WDINTS:1; //watchdog interrupt status bit;
	Uint32  rsvd:29;
	
};


union SCSR_REG  
{
	Uint32 all;
	struct SCSR_BITS bit;
};

struct WDCR_BITS
{
	Uint32 WDPS:3; //0- 2 watchdog pre-scale
	Uint32 WDCHK:3;//3 - 5  watchdog check
	Uint32 WDDIS:1;//6  watchdog disable bit
	Uint32 WDFLAG:1;//7  watch reset status flag bit
	Uint32 rsvd:24;
};

union WDCR_REG
{
	Uint32 all;
	struct WDCR_BITS bit;
};

//---------------------------------------------------------------------------
// System Control Register File:
//
struct SYS_CTRL_REGS {

	union	XCLK_REG		XCLK;		 // 0: XCLKOUT Control		00
	union   PLLSTS_REG      PLLSTS;      // 1: PLL Status Register		04
	union   PCLKCR0_REG     PCLKCR0;     // 12: Peripheral clock control register		08
	union   PCLKCR1_REG     PCLKCR1;     // 13: Peripheral clock control register		0C
	//union   PCLKCR1_REG     PCLKCR2;		//											10
	Uint32  rsvd4;
	union   PCLKCR3_REG     PCLKCR3;     // 16: Peripheral clock register		14
	union   LOSPCP_REG      LOSPCP;      // 11: Low-speed peripheral clock pre-scaler	18
	union   INTOSC1TRIM_REG INTOSC1TRIM; // 4: Internal Oscillator 1 Trim			1C
	union   INTOSC2TRIM_REG INTOSC2TRIM; // 6: Internal Oscillator 2 Trim			20
	union   CLKCTL_REG      CLKCTL;      // 2: Clock Control Register				24
	union   PLLCR_REG       PLLCR;       // 17: PLL control register				28
	Uint32                  PLLLOCKPRD;  // 3: PLL Lock Period Register				2C
	union   LPMCR0_REG      LPMCR0;      // 14: Low-power mode control register 0	30
	union 	SCSR_REG        SCSR;        // 18: System control and status register	34
	Uint32                  WDCNTR;      // 19: WD counter register					38
	Uint32                  WDKEY;       // 21: WD reset key register				3C
	union   WDCR_REG		WDCR;		//	Watchdog Control Register    			40
	Uint32 					JTAG_DEBUG;				//					44
	Uint32 rsvd2[6];
	struct SYS_PWR_CTRL_REGS	BORCFG;		//		BOR Configuration Register  						60
//	Uint32 rsvd3[7];
//	union  DEVICECNF_REG	DEVICECNF;//  									Device Configuration Register			0x80
//	union  CLASSID_REG  	CLASSID;						// CLASSID Register 								  84
//	Uint32		REVID;						//		revision number								88
};



/* --------------------------------------------------- */
/* CSM Registers                                       */
/*                                                     */
/* ----------------------------------------------------*/

/* CSM Status & Control register bit definitions */
struct  CSMSCR_BITS {      // bit   description
   Uint32     SECURE:1;    // 0     Secure flag  CSM状态，表示当前设备是否处于加密状态，0-unlocked，1-locked，只读
   Uint32     rsvd1:30;    // 1-30  reserved
   Uint32     rsvd3:1;		//31  读为0，写1使设备加密，清除KEY寄存器为0xFFFF_FFFF
};

/* Allow access to the bit fields or entire register */
union CSMSCR_REG {
   Uint32             all;
   struct CSMSCR_BITS bit;
};

/* CSM Register File */
struct  CSM_REGS {
   union CSMSCR_REG CSMSCR;  // CSM Status & Control register	   00
   Uint32           KEY0;    // KEY reg bits 31-0      				04
   Uint32           KEY1;    // KEY reg bits 63-32					08
   Uint32           KEY2;    // KEY reg bits 95-64					0C
   Uint32           KEY3;    // KEY reg bits 127-96					10
};

/* Password locations */
struct  CSM_PWL {
   Uint32   PSWD0;  // PSWD bits 31-0
   Uint32   PSWD1;  // PSWD bits 63-32
   Uint32   PSWD2;  // PSWD bits 95-64
   Uint32   PSWD3;  // PSWD bits 127-96
};

/* Flash Registers */

#define FLASH_SLEEP   0x0000;
#define FLASH_STANDBY 0x0001;
#define FLASH_ACTIVE  0x0003;

/* Flash Option Register bit definitions */
struct  FOPT_BITS {       // bit   description
   Uint32     ENPIPE:1;   // 0     Enable Pipeline Mode
   Uint32     rsvd:31;    // 1-31  reserved
};

/* Allow access to the bit fields or entire register */
union FOPT_REG {
   Uint32           all;
   struct FOPT_BITS bit;
};

/* Flash Power Modes Register bit definitions */
struct  FPWR_BITS {       // bit   description
   Uint16     PWR:2;      // 0-1   Power Mode bits
   Uint16     rsvd:14;    // 2-15  reserved
};

/* Allow access to the bit fields or entire register */
union FPWR_REG {
   Uint16           all;
   struct FPWR_BITS bit;
};

/* Flash Status Register bit definitions */
struct  FSTATUS_BITS {       // bit   description
   Uint16     PWRS:2;        // 0-1   Power Mode Status bits
   Uint16     STDBYWAITS:1;  // 2     Bank/Pump Sleep to Standby Wait Counter Status bits
   Uint16     ACTIVEWAITS:1; // 3     Bank/Pump Standby to Active Wait Counter Status bits
   Uint16     rsvd1:4;       // 4-7   reserved
   Uint16     V3STAT:1;      // 8     VDD3V Status Latch bit
   Uint16     rsvd2:7;       // 9-15  reserved
};

/* Allow access to the bit fields or entire register */
union FSTATUS_REG {
   Uint16              all;
   struct FSTATUS_BITS bit;
};

/* Flash Sleep to Standby Wait Counter Register bit definitions */
struct  FSTDBYWAIT_BITS {    // bit   description
   Uint16     STDBYWAIT:9;   // 0-8   Bank/Pump Sleep to Standby Wait Count bits
   Uint16     rsvd:7;        // 9-15  reserved
};

/* Allow access to the bit fields or entire register */
union FSTDBYWAIT_REG {
   Uint16                 all;
   struct FSTDBYWAIT_BITS bit;
};

/* Flash Standby to Active Wait Counter Register bit definitions */
struct  FACTIVEWAIT_BITS {   // bit   description
   Uint16     ACTIVEWAIT:9;  // 0-8   Bank/Pump Standby to Active Wait Count bits
   Uint16     rsvd:7;        // 9-15  reserved
};

/* Allow access to the bit fields or entire register */
union FACTIVEWAIT_REG {
   Uint16                  all;
   struct FACTIVEWAIT_BITS bit;
};



struct  FMERCTL_BITS
{
	Uint32 MASS_ERASE:1;//bit0：MASS erase ，写1，执行mass erase，读为0
	uint32 rsvd:31;
};


union FMERCTL_REG
{
	Uint32 all;
	struct  FMERCTL_BITS bit;
};


struct FPERCTL_BITS
{
//Bit15：0分别代表page 15-0的erase 
	Uint32 erase:6;//0 - 5
	Uint32 rsvd1:26;// 6- 31
};

union FPERCTL_REG
{
	Uint32 all;
	struct FPERCTL_BITS bit;
};

struct FSTAT_BITS	  
{
	Uint32 BUSY:1; //0  flash busy，即正在执行read/program/page erase/mass erase，
	Uint32 READING:1;//1  flash正在执行read操作；
	Uint32 PROGRAMING:1;//  2  flash正在执行program操作；
	Uint32 ERASEING:1;//  3  flash正在执行page erase 操作  
	Uint32 MASS_ERASE:1;// 4  flash memory block write 使能，写存储器时使能   只读
	Uint32 rsvd1:27;
};


union FSTAT_REG 
{
	Uint32 all;
	struct FSTAT_BITS bit;
};




struct FMEMWREN_BITS
{
	Uint32 FMEMWREN:1;
	Uint32 rsvd:31;
};

union FMEMWREN_REG
{
	Uint32 all;
	struct FMEMWREN_BITS bit;
};

struct OTPSTAT_BITS
{
	Uint32 OTPSTAT_WRITE:1;
	Uint32 OTPSTAT_ERASE:1;
	Uint32 rsvd:30;
};

union OTPSTAT_REG
{
	Uint32 all;
	struct OTPSTAT_BITS bit;
};

struct OTPWREN_BITS
{
	Uint32  OTPWREN:1;
	Uint32  rsvd:31;
};


union OTPWREN_REG
{
	Uint32 all;
	struct OTPWREN_BITS bit;
};





struct FLASH_REGS {

   struct CSM_REGS 		 SYSCsmRegs; //  0	
   Uint32  FERREFCELL;	//		写该寄存器任意值执行erase reference cell，用户不可见      		        0x14
   Uint32   rsvd2[26];
   
   Uint32   FPROWAIT; 	//	Flash program 等待周期，默认值为0d2000（用户不可见）               0x80
   Uint32	FPERWAIT;	//	Flash page erase 等待周期，默认值为0d4000_0000（用户不可见）		0x84
   Uint32	FMERWAIT;	//	Flash mass erase 等待周期，默认值为0d40000000（用户不可见）0x88
   union FMERCTL_REG FMERCTL;//0x8C  Flash mass erase 控制寄存器
   union FPERCTL_REG FPERCTL;//0x90  Flash page erase 控制寄存器
   union FSTAT_REG FSTAT;//0x94  Flash 状态寄存器 只读   
   union FMEMWREN_REG FMEMWREN;//	Bit0： flash memory block write 使能，写存储器时使能				0x98
   union OTPSTAT_REG	OTPSTAT;//  Bit0：otp正在执行写操作,bit1：otp正在执行mass erase操作      00        00  0x9C
   union OTPWREN_REG	OTPWREN;//  Bit0：写OTP使能     0xA0
   Uint32 		OTPER;//	写该寄存器任意值，表示对otp执行mass erase操作                    0xA4	
   union FOPT_REG        FOPT;        //  Option Register 						0xA8
   Uint32   FBANKWAIT;   // Bank Read Access Wait State Register				0xAC
   Uint32   FNVSHWAIT;// Flash program/erase 控制字，控制NVSTR setup/hold时间，配置值为5us/T，默认值为0d481=5us/10.4  0xB0
   Uint32   FNVH1WAIT;// Flash mass erase 控制字，控制NVSTR hold时间，配置值为100us/T，默认值为0d9607=5us/10.4  0xB4
   Uint32   FPGSWAIT;//  Flash program 控制字，控制program hod时间，配置值为10us/T，默认值为0d959=10us/10.4						0xB8
};

//---------------------------------------------------------------------------
// System Control External References & Function Declarations:
//
//extern volatile struct SYS_CTRL_REGS SysCtrlRegs;


extern volatile struct SYS_CTRL_REGS  *const P_SysCtrlRegs;
extern volatile struct SYS_CTRL_REGS  SysCtrlRegs;



#define  SysPwrCtrlRegs  (P_SysCtrlRegs->BORCFG)

#define CsmRegs   (P_FlashRegs->SYSCsmRegs)



extern volatile struct CSM_PWL  *const P_CsmPwl;
extern volatile struct CSM_PWL  CsmPwl;



extern volatile struct FLASH_REGS  *const  P_FlashRegs;
extern volatile struct FLASH_REGS  FlashRegs;


#ifdef __cplusplus
}
#endif /* extern "C" */

#endif  // end of DSP2802x_SYS_CTRL_H definition

//===========================================================================
// End of file.
//===========================================================================

