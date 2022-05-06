	AREA    RESET, DATA, READONLY
	area srm, code, readonly
	mov sp, #0X40000000
	ldmfa sp!, {r0-r2}
	mov sp, #0X40000020
	stmfa SP!, {r0-r2}
L1	b L1
	end
		