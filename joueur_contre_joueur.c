#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"
#include "ordinateur.h"


void joueur_contre_joueur (char mondeCarre[30][30] , int dim)  
{
    
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     int i = 0;
     while (getchar()!='\n');
     while (i<4)
     {
     joueur_2(mondeCarre, dim);
     printf("C'est au tour du joueur_2 \n");
     joueur_1(mondeCarre, dim);
     affiche(mondeCarre, dim);
     i++;
     }  
     

     
}


