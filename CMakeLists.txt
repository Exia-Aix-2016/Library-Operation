cmake_minimum_required(VERSION 3.6)
project(test2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.c addition.c addition.h multiplication.c multiplication.h soustraction.c soustraction.h puissance.c puissance.h Racine.h Racine.c)


add_executable(test2 ${SOURCE_FILES})

target_link_libraries(test2 m)