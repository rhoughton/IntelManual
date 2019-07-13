.data
endorString db 12 dup(0), 0

.code 
GetCPUIDSupport proc
pushfq
pop rax
mov rbx, rax
xor rax, 200000h
push rax
popfq
pushfq
pop rax
cmp rax, rbx
jz No_CPUID
pop rbxmov rax, 1
ret

No_CPUID
pop rbxmov rax, 1
ret
GetCPUIDSupport endp

GetVendorString proc
push rbx
mov eax, 0
cpuid
lea rax, vendorString

mov dword ptr [rax], ebx
mov dword ptr [rax+4], edx
mov dword ptr [rax+8], ecx
GetVendorString endp
