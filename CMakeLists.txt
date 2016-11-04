cmake_minimum_required(VERSION 3.6)
project(test2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
<<<<<<< HEAD
    main.c addition.c addition.h multiplication.c multiplication.h soustraction.c soustraction.h Racine.h Racine.cpp)
=======
    main.c addition.c addition.h multiplication.c multiplication.h soustraction.c soustraction.h puissance.c puissance.h)
>>>>>>> develop

add_executable(test2 ${SOURCE_FILES})