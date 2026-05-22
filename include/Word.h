#pragma once

#include <iostream>

enum OpCode {ADD, SUB, LDA, STR, JMP, HLT};

struct Word
{
    int OpCode;
    int Address_Data;

    Word();
    void SetWord(int OpCode, int Address_Data);
    void Print();
};