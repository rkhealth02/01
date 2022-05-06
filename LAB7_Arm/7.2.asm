		
		AREA    RESET, DATA, READONLY
		AREA SWITCHLED, CODE, READONLY
		IO0DIR EQU 0XE0028008
		IO1DIR EQU 0XE0028018
		IO0SET EQU 0XE0028004
		IO1SET EQU 0XE0028014
		IO0CLR EQU 0XE002800C
		IO1CLR EQU 0XE002801C
		IO0PIN EQU 0XE0028000
		IO1PIN EQU 0XE0028010
START	LDR R0, =IO0DIR
		MOV R1, =0XFFFFFFFF
		STR R1, [R0]
		LDR R5, =IO1DIR
		MOV R6, #0X0
		STR R6, [R5]
		LDR R7, =IO1PIN
		MOV R9, #0X0
		STR R9, [R7]
		LDR R8, [R7]
		MOV R10, #0X80000000
		CMP R8, R10
		BNE LP
		LDR R1, =0XAAAAAAAA
LP		LDR R2, =IO0SET
		STR R1, [R2]
		BL DELAY
		LDR R3, =IO0CLR
		STR R1, [R3]
		BL    DELAY
		B START
DELAY	LDR R4, =0X00FFFFFF
		SUBS R4, R4, #0X01
		BNE L
		BX LR
		END

