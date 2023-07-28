global	main
external	print
main:
mov	edi, format
xor	eax, eax
call	printf
mov	eax, 0
re
format: db	hello, holberton\n',0
