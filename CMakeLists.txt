cmake_minimum_required(VERSION 3.24)
project (Task_25_1)

set(CMAKE_CXX_STANDARD 17)


add_executable(Task_25_1 main.cpp include/surgery.h src/sur_function.cpp)
target_include_directories(Task_25_1 PUBLIC include)