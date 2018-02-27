.text
.global add

add:
movq (%rdi), %rax
movq (%rsi), %rbx 
addq %rbx , %rax
ret
