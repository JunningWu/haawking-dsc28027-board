

.section  .text 

.global	 ifr_set

#IFR: 使能中断使能寄存器 0x344
ifr_set:
 csrr a1, 0x344   //a1  = IFR                                                            
 or a2, a1, a0    //a2 = a1 | a0 
 csrrw a0,0x344,a2  //IFR = a2 ,  a0 = IFR
 ret


	

