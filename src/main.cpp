#include "Emulator.h"

int main()
{
    Emulator emulator;
    emulator.Start();

    std::cout << "Press any key to close" << std::endl;
    std::cin.get();

    return 0;
}