cmake_minimum_required(VERSION 3.23)
project(CourseWorkWT)

set(CMAKE_CXX_STANDARD 20)

add_executable(CourseWorkWT main.cpp Data/Person.cpp  Data/Person.h Data/Worker.cpp Data/Worker.h Data/Teacher.cpp Data/Teacher.h)
