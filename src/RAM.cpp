#include "Emulator.h"

RAM::RAM()
{
    Memory = nullptr;
    Size = 8; // size must match the size of the program to be loaded
}