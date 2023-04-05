//
// Created by Emmanuel on 03/04/2023.
//
#ifndef DEF_AFFICHE_TAS
#define DEF_AFFICHE_TAS
#include "affiche_tas.h"
#endif

#ifndef GESTIONMEMOIREAVANCE_STRATEGIES_H
#define GESTIONMEMOIREAVANCE_STRATEGIES_H

#endif //GESTIONMEMOIREAVANCE_STRATEGIES_H



char* first_fit(unsigned int taille);
    /* trouve la premiere place vide de taille suffisante*/

int estLibre(char *ptr);
    /* trouve la premiere place vide */

int aTailleSuffisante(char *ptr, unsigned int taille);
    /* verifie que la taille est suffisante */
