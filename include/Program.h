#pragma once

#include "Word.h"

struct Program
{
    Word *program;
    int size;

    Program();
    Word *ImportProgram();
    void PrintProgram();
};