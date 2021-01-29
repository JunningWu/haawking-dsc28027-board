
.section  .text 

.global	 _usDelay
# 1:3 cycles
# 2:5 cycles
#10:21 cycles
#n: 2n + 1 cycles
_usDelay:
    addi a0,a0,-1
    bgtz a0,_usDelay
	ret


