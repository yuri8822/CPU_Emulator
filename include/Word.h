#pragma once

#include "OpCode.h"

struct Word
{
    int OpCode;
    int Address_Data;

    Word();
    void SetWord(int OpCode, int Address_Data);
};