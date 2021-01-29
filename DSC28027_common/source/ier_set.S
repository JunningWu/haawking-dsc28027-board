

.section  .text 

.global	 ier_set

#IER: 使能中断使能寄存器 0x304
ier_set:
 csrr a1, 0x304   //a1  = IER                                                            
 or a2, a1, a0    //a2 = a1 | a0 
 csrrw a0,0x304,a2  //IER = a2 ,  a0 = IER
 ret


	

