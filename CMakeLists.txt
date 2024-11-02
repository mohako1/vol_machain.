cmake_minimum_required(VERSION 3.29)
project(vol_machain__main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(vol_machain__main
    ALU.cpp
    ALU.h
    BUS.cpp
    BUS.h
    Memory.cpp
    Memory.h
    PC.cpp
    PC.h
    Rigister.cpp
    Rigister.h
    vol_machain.cpp
    vol_machine_header.h
        mainMachine.cpp
        mainMachine.h
        interFace.cpp
        interFace.h
        CUP.cpp
        CUP.h
)
