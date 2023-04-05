cmake_minimum_required(VERSION 3.24)
project(gestionMemoireAvance C)

set(CMAKE_C_STANDARD 17)

add_executable(gestionMemoireAvance main.c affiche_tas.h affiche_tas.c tas.c strategies.h strategies.c)
