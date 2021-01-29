

.section  .text 

.global	 ifr_unset

#IFR: 使能中断使能寄存器 0x344
ifr_unset:
 csrr a1, 0x344 # read IFR to a1
 not a2,a0      # a2 = ~a0
 mv a0, a2      # a0 = a2
 and a2, a1, a0  # a2 = a1 & a0
 csrrw a0,0x344,a2  #  IFR = a2 ,  a0 = IFR
 ret


	

