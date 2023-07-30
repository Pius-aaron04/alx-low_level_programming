section .data	;data section

hello db 'Hello, Holberton\n', 0

section .text	; code section
	global _start ; entry point
_start:
	mov eax, 4	; system call number for sys_write
	mov ebx, 1	; file descriptor (stdout)
	mov ecx, hello	; string data
	mov edx, 17	; string length

	; Program exit
	mov eax, 1	; system call number for sys_exit (1)
	xor ebx, ebx	; exit status (0)
