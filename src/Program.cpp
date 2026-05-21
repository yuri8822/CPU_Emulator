#include "Emulator.h"

Program::Program()
{
    program1 = nullptr;
    program2 = nullptr;
}

Word *Program::Program1_Data()
{
    program1 = new Word[8];

    program1[0].SetWord(LDA, 6);
    program1[1].SetWord(ADD, 7);
    program1[2].SetWord(STR, 6);
    program1[3].SetWord(JMP, 1);
    program1[4].SetWord(-1, 0);
    program1[5].SetWord(-1, 0);
    program1[6].SetWord(-1, 1);
    program1[7].SetWord(-1, 1);

    return program1;
}

Word *Program::Program2_Data()
{
    program2 = new Word[8];

    program2[0].SetWord(LDA, 6);
    program2[1].SetWord(ADD, 7);
    program2[2].SetWord(STR, 6);
    program2[3].SetWord(HLT, 0);
    program2[4].SetWord(-1, 0);
    program2[5].SetWord(-1, 0);
    program2[6].SetWord(-1, 1);
    program2[7].SetWord(-1, 5);

    return program2;
}