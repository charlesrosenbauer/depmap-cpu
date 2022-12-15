#ifndef __CPU_HEADER__
#define __CPU_HEADER__


#include "stdint.h"

typedef struct{
	uint16_t	regs[8];
	uint16_t	ip;
	
	uint16_t*	ram;
	int			ramsize;
}Computer;

typedef enum{
	OP_NOP	= 0x00,
	OP_ADD	= 0x01,
	OP_ADC	= 0x02,
	OP_SUB	= 0x03,
	OP_SBB	= 0x04,
	OP_LS	= 0x05,
	OP_LSE	= 0x06,
	OP_GT	= 0x07,
	OP_GTE	= 0x08,
	OP_EQ	= 0x09,
	OP_NEQ	= 0x0A,
	OP_AND	= 0x0B,
	OP_OR	= 0x0C,
	OP_XOR	= 0x0D,
	OP_NOT	= 0x0E,
	OP_JMP	= 0x0F,
	OP_JC	= 0x10,
	OP_LD	= 0x11,
	OP_ST	= 0x12,
	OP_MOV	= 0x13,
	OP_MUL	= 0x14,
	OP_DIV	= 0x15
}Opcode;

typedef uint16_t Instruction;




#endif
