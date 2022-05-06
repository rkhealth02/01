;ROHIT KUMBHAR
	AREA    RESET, DATA, READONLY
	area srm, code, readonly
	mov sp, #0X40000000
	ldmfd sp!, {r0-r2}
	mov sp, #0X40000018
	stmfd SP!, {r0-r2}
L1	b L1
	end	