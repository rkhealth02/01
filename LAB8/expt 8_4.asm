	AREA	RESET, DATA, READONLY
	area srm, code, readonly
	mov sp, #0X40000010
	ldmea sp!, {r0-r2}
	mov sp, #0X40000018
	stmea SP!, {r0-r2}
L1	b L1
	end