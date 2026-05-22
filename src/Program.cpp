#include "Emulator.h"

Program::Program()
{
    program = nullptr;
    size = 0;
}

Word *Program::ImportProgram()
{
    std::ifstream File("program.txt");
    std::vector<std::string> Lines;
    std::string Line;

    while (std::getline(File, Line))
    {
        size++;
        Lines.push_back(Line);
    }
    
    program = new Word[size];

    for (int i = 0; i < size; i++)
    {
        std::stringstream ss(Lines[i]);
        std::string OC;
        std::string AD;

        std::getline(ss, OC, ' ');
        std::getline(ss, AD, '\0');

        int OpCode = std::stoi(OC);
        int Address_Data = std::stoi(AD);

        program[i].SetWord(OpCode, Address_Data);
    }

    return program;
}

void Program::PrintProgram()
{
    for (int i = 0; i < size; i++)
    {
        program[i].Print();
    }
}