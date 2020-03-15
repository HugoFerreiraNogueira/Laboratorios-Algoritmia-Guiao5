cmake_minimum_required(VERSION 3.15)
project(projecto C)

set(CMAKE_C_STANDARD 99)

add_executable(projecto main.c "camada de dados.h" logica.c logica.h interface.c interface.h "camada de dados.c")