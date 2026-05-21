#pragma once

#include "Word.h"

struct CPU
{
    int ACC;
    int PC;
    Word IR;
    int rA;
    int rB;
    int clock;

    CPU();
    void Execute(int instruction, int address_data, Word *Memory);
    void PrintRegisters();
};