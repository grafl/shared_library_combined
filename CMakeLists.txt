cmake_minimum_required(VERSION 3.25)

project(adder_with_test)

set(ADDER adder)
set(MULTIPLIER multiplier)
set(TESTER test)

add_subdirectory(${ADDER})
add_subdirectory(${MULTIPLIER})
add_subdirectory(${TESTER})
