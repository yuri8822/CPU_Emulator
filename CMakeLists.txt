cmake_minimum_required(VERSION 3.10)
project(6502_Emulator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(emulator
    src/main.cpp
    src/CPU.cpp
    src/RAM.cpp
    src/Word.cpp
    src/Program.cpp
    src/Emulator.cpp
)
