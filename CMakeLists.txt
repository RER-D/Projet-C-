cmake_minimum_required(VERSION 4.3)
project(Projet_algo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Projet_algo
        main.c
        Gestion/produit/produit.c
        Gestion/produit/produit.h
        Structure/Struct.c
        Structure/Struct.h
        Gestion/commande/commande.c
        Gestion/commande/commande.h
        main.h
        Gestion/clients/client.c
        Gestion/clients/client.h
        Gestion/clients/client.h
        Gestion/clients/client.h)
