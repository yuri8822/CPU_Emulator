#include "Emulator.h"

Emulator::Emulator()
{
    RAM.Memory = Program.ImportProgram(); // loading the program into the RAM before Start() is called
    RAM.size = Program.size;
    // Program.PrintProgram();
}

void Emulator::Start()
{
    system("CLS");


    while (PC < RAM.size)
    {
        std::cout << "--------------BEFORE OPERATION :-\n";
        CPU.PrintRegisters(); // Printing state of registers BEFORE operation

        // Fetch
        IR = RAM.Memory[PC];

        // Decode
        instruction = IR.OpCode;
        address_data = IR.Address_Data;

        // Execute
        CPU.Execute(instruction, address_data, RAM.Memory);

        std::cout << "--------------AFTER OPERATION :-\n";
        CPU.PrintRegisters(); // Printing state of registers AFTER operation

        if (instruction != JMP)
        {
            PC++;
        }
        clock++;
    }
}