#include "Emulator.h"

Emulator::Emulator()
{
    RAM.Memory = Programs.Program2_Data(); // loading the program into the RAM before Start() is called
}

void Emulator::Start()
{
    system("CLS");

    while (PC < RAM.Size)
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