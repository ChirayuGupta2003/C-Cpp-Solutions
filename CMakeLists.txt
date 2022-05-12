cmake_minimum_required(VERSION 3.22)
project(C_Cpp_Solutions)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("Semester 1")
include_directories("Semester 2")


add_executable(Lab2A2 "Semester 2/Lab2/Lab2A2.cpp" "Semester 2/AssignmentSet2/Set2Lab6/Set2Lab6A1.cpp")
add_executable(Lab2A3 "Semester 2/Lab2/Lab2A3.cpp")