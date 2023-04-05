//
// Created by Emmanuel on 03/04/2023.
//
#include "tas.h"


char* tas_malloc(unsigned int taille)
{
    int reste = 0;
    char* ptr = first_fit(taille);
    reste = *ptr;
    *ptr = taille;
    *(ptr+1) = 0;

    *(ptr+taille+1) = reste - (taille+1);
    *(ptr+taille+2) = -1;

    libre += (taille + 1);

}

int tas_free(char *ptr)
{
    int saut;
    int taille = *ptr;
    for (int i = 0 ; i <= taille ; i++)
    {
        *(ptr+i) = 0;
    }

    while (ptr < tas+TAILTAS-1)
    {

        if (estLibre(ptr))
        {
            *ptr -= taille;
            return 1;
        }

        saut = *ptr+1;

        ptr += saut;
    }

    return -1;


}

