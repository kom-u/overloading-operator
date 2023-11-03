cmake_minimum_required(VERSION 3.26)
project(overloading-operator)

set(CMAKE_CXX_STANDARD 17)

add_executable(overloading-operator src/main.cpp
        src/SalesOffice/SalesOffice.cpp
        src/SalesOffice/SalesOffice.h
        src/Fraction/Fraction.cpp
        src/Fraction/Fraction.h)
