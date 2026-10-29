cmake_minimum_required(VERSION 4.3)
project(Projet_algo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Projet_algo
        main.c
        produit.c
        produit.h
        Struct.c
        Struct.h
        commande.c
        commande.h)
