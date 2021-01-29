

.section  .text 

.global	 ier_unset

#IER: 使能中断使能寄存器 0x304
ier_unset:
 csrr a1, 0x304 # read IER to a1
 not a2,a0      # a2 = ~a0
 mv a0, a2      # a0 = a2
 and a2, a1, a0  # a2 = a1 & a0
 csrrw a0,0x304,a2  #  IER = a2 ,  a0 = IER
 ret


	

