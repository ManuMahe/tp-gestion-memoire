#include <stdio.h>

#ifndef DEF_AFFICHE_TAS
#define DEF_AFFICHE_TAS
#include "affiche_tas.h"
#endif

#ifndef DEF_STRATEGIES
#define DEF_STRATEGIES
#include "strategies.h"
#endif

int libre;

int main() {
    tas_init();
    /*
//    printf("tas[0] : %d\n", tas[0]);
//    afficher_tas();
    //printf("%d\n",first_fit(12));

    //// test 1 :
    tas[0] = 10;
    tas[1] = 'a';
    tas[2] = 'b';
    tas[3] = '\0';
    tas[11] = 116;
    tas[12] = -1;
    libre = 11;


    //printf("%d\n",first_fit(12));

    //// test 2 :
    tas[11] = 9;
    tas[12] = 0;
    tas[21] = 106;
    tas[22] = -1;
    libre = 21;

//    printf("%d\n",affichePointeur(first_fit(12)));
    char *p1;
    p1 = (char *) tas_malloc(5);

    afficher_tas();

    printf("%d\n",affichePointeur(first_fit(12)));
    */

    char *p1, *p2, *p3, *p4, *p5;
    p1 = (char *) tas_malloc(10);
    p2 = (char *) tas_malloc(9);
    p3 = (char *) tas_malloc(5);
//    strcpy( p1, "tp 1" );
//    strcpy( p2, "tp 2" );
//    strcpy( p3, "tp 3" );
    afficher_tas();
    tas_free(p2);
//    p4 = (char *) tas_malloc(8);
//    strcpy( p4, "systeme" );
    afficher_tas();

    return 0;
}
