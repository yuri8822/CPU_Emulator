#include "Emulator.h"

CPU::CPU()
{
    // Initializing the registers on "Power up"
    ACC = 0;
    PC = 0;
    IR.OpCode = -1;
    IR.Address_Data = 0;
    rA = 0;
    rB = 0;

    // Initializing clock at 0
    clock = 0;
}

void CPU::Execute(int instruction, int address_data, Word *Memory)
{
    switch (instruction)
    {
    case ADD:
        ACC += Memory[address_data].Address_Data;
        break;
    case SUB:
        ACC -= Memory[address_data].Address_Data;
        break;
    case LDA:
        ACC = Memory[address_data].Address_Data;
        break;
    case STR:
        Memory[address_data].Address_Data = ACC;
        break;
    case JMP:
        PC = address_data;
        break;
    case HLT:
        PC = 99999;
        break;
    case -1:
        // this is Data, do not execute, simply return
        break;
    default:
        break;
    }
}

void CPU::PrintRegisters()
{
    std::cout
        << "Clock : " << clock << std::endl
        << "-----------------------------" << std::endl
        << "Program Counter : " << PC << std::endl;

    switch (IR.OpCode)
    {
    case -1:
        std::cout << "Instruction Register : " << "0 " << IR.Address_Data << std::endl;
        break;
    case ADD:
        std::cout << "Instruction Register : " << "ADD " << IR.Address_Data << std::endl;
        break;
    case SUB:
        std::cout << "Instruction Register : " << "SUB " << IR.Address_Data << std::endl;
        break;
    case LDA:
        std::cout << "Instruction Register : " << "LDA " << IR.Address_Data << std::endl;
        break;
    case STR:
        std::cout << "Instruction Register : " << "STR " << IR.Address_Data << std::endl;
        break;
    case JMP:
        std::cout << "Instruction Register : " << "JMP " << IR.Address_Data << std::endl;
        break;
    case HLT:
        std::cout << "Instruction Register : " << "HLT " << IR.Address_Data << std::endl;
        break;
    default:
        break;
    }

    std::cout
        << "Accumulator : " << ACC << std::endl
        << "register A : " << rA << std::endl
        << "register B : " << rB << std::endl
        << std::endl;
}