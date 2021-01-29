
#ifndef DSC28027_DEV_EMU_H
#define DSC28027_DEV_EMU_H

#ifdef __cplusplus
extern "C" {
#endif

//---------------------------------------------------------------------------
// Device Emulation Register Bit Definitions:
//
// Device Configuration Register Bit Definitions
struct DEVICECNF_BITS  {     // bits  description
   Uint32 rsvd1:5;           // 0-4   reserved
   Uint32 XRSn:1;            // 5     XRSn Signal Status
   Uint32 rsvd3:21;          // 6-26  reserved
   Uint32 TRSTn:1;           // 27    Status of TRSTn signal
   Uint32 rsvd6:4;           // 31:28 reserved
};

union DEVICECNF_REG {
   Uint32                 all;
   struct DEVICECNF_BITS  bit;
};

// CLASSID
struct CLASSID_BITS   {  // bits  description
   Uint32 CLASSNO:8;     // 7:0   Class Number
   Uint32 PARTTYPE:24;    // 15:8  Part Type
};

union CLASSID_REG {
   Uint32               all;
   struct CLASSID_BITS  bit;
};



struct DEV_EMU_REGS {
   union DEVICECNF_REG DEVICECNF;  // Device Configuration
   union CLASSID_REG   CLASSID;    // Class ID
   Uint32              REVID;      // Device ID
};

// PARTID
struct PARTID_BITS   {  // bits  description
   Uint32 REVID:16;     // 0-16   Part Number
   Uint32 rsvd:16;   // 
};

union PARTID_REG {
   Uint32               all;
   struct PARTID_BITS   bit;
};

struct PARTID_REGS {
   union PARTID_REG REVID; // Part ID
};


//---------------------------------------------------------------------------
// Device Emulation Register References & Function Declarations:
//
//extern volatile struct DEV_EMU_REGS DevEmuRegs;
//extern volatile struct PARTID_REGS PartIdRegs;


extern 	volatile struct DEV_EMU_REGS  *const P_DevEmuRegs;
extern  volatile struct DEV_EMU_REGS DevEmuRegs;



#ifdef __cplusplus
}
#endif /* extern "C" */

#endif  // end of DSP2802x_DEV_EMU_H definition

//===========================================================================
// End of file.
//===========================================================================
