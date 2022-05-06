	;ROHIT KUMBHAR  RA1911043010041
	AREA    RESET, DATA, READONLY
	area srm, code, readonly
	mov sp, #0X40000000
	ldmed sp!, {r0-r2}
	mov sp, #0X40000018
	stmed SP!, {r0-r2}
L1	b L1
	end