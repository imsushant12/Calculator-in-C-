cmake_minimum_required(VERSION 3.0)
project(CalculatorInC)

set(CMAKE_CXX_STANDARD 11)


set(CMAKE_CXX_FLAGS "-static")


add_executable(CalculatorInC
        Calculator.cpp)