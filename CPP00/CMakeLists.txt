cmake_minimum_required(VERSION 3.17)
project(CPP00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/megaphone.cpp test/Sample.class.h)
add_executable(ex01 ex01/main.cpp ex01/Contact.class.cpp ex01/Contact.class.h ex01/Book.class.h ex01/Book.class.cpp)
add_executable(test test/Sample.class.h test/Sample.class.cpp test/main.cpp)