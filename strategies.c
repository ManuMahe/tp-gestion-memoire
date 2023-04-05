//
// Created by Emmanuel on 03/04/2023.
//
#include <stdlib.h>
#include <stdio.h>

#ifndef DEF_STRATEGIES
#define DEF_STRATEGIES
#include "strategies.h"
#endif

int estLibre(char *ptr)
{
    return *(ptr+1) == FIN ? 1 : -1;
}
int aTailleSuffisante(char *ptr, unsigned int taille)
{
    return *ptr >= taille ? 1 : -1;
}

char* first_fit(unsigned int taille)
{
    int saut;

    char* ptr = tas + libre;

    if (aTailleSuffisante(ptr, taille)){
        return ptr;
    }

    while (ptr < tas+TAILTAS-1)
    {

        if (estLibre(ptr) && aTailleSuffisante(ptr, taille))
        {
            return *ptr;
        }

        saut = *ptr+1;

        ptr += saut;
    }

    return NULL;

}


