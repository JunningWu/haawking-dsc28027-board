
#ifndef DSC28027_BOOT_VARS_H
#define DSC28027_BOOT_VARS_H

#ifdef __cplusplus
extern "C" {
#endif



//---------------------------------------------------------------------------
// External Boot ROM variable definitions:
//


extern Uint32 Flash_CPUScaleFactor;
extern void (*Flash_CallbackPtr) (void);

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif  // end of DSP2802x_BOOT_VARS_H definition




