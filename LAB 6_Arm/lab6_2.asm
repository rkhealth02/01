 		AREA    RESET, DATA, READONLY       
		AREA TRI, CODE, READONLY
        LDR R3, =0X000003FF
        LDR R1, =0xE002C004
        LDR R2, =0x00080000
        STR R2,[R1]
        LDR R0, =0xE006C000
        LDR R2, =0x0
L1        LSL R1,R2,#06
        STR R1,[R0]
        ADD R2,R2,#01
        CMP R2,R3
        BLT L1        
L2      LSL R1,R2,#06
        STR R1,[R0]
        SUBS R2,R2,#01
        BNE         L2
        B               L1
        END