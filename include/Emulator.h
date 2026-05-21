#pragma once

#include "Program.h"
#include "RAM.h"
#include "CPU.h"

class Emulator
{
private:
    Program Programs;
    RAM RAM;
    CPU CPU;
    int instruction;
    int address_data;
    int &PC = CPU.PC;
    Word &IR = CPU.IR;
    int &clock = CPU.clock;

public:
    Emulator();
    void Start();
};