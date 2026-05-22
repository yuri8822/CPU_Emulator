#include "Emulator.h"

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

void Word::Print()
{
    std::cout << this->OpCode << " " << this->Address_Data << std::endl;
}
