#include "Emulator.h"

int OpCode;
int Address_Data;

Word::Word()
{
    this->OpCode = LDA;
    this->Address_Data = 0;
}

void Word::SetWord(int OpCode, int Address_Data)
{
    this->OpCode = OpCode;
    this->Address_Data = Address_Data;
}
