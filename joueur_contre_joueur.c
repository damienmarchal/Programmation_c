#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"

void joueur_contre_joueur (char mondeCarre[][10] , int dim)
{
    char couleur, joueur1 , joueur2;
    joueur2 = '@';
    joueur1 = '^';
    int changed = 1;
     printf("Joueur_1:Choisir une couleur parmi: A,B,C,D,E,F,G \n");
     scanf("%c",&couleur);
    if (joueur1 == '^')
    {
        while (getchar() != '\n');
        while (changed > 0)
            {
                changed = 0;
                for (int i =0; i<dim; i++)
                    {
                        for (int j =9; j>=0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur1)
                                    {    
                                        if ( j+1 <=  9 && mondeCarre[i][j+1] == couleur)  
                                                {
                                                    mondeCarre[i][j+1] = joueur1;
                                                    changed = 1;
                      
                                                }
                                        else if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur1;
                                                    changed = 1;
                                                }
                                        else if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                                                {
                                                    mondeCarre[i-1][j] = joueur1;
                                                    changed = 1;
                                                }
                                        else 
                                                {
                                                    changed = 0;
                                                }
                                    
                                    } 
                            }
                    }
            } 
    
    }
    
    
     printf("Joueur2:Choisir une couleur parmi: A,B,C,D,E,F,G \n");
     scanf("%c",&couleur);
    if (joueur2 == '@')
    {
        while (getchar() != '\n');
        while (changed > 0)
            {
                changed = 0;
                for (int i =0; i<dim; i++)
                    {
                        for (int j =9; j>=0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur2)
                                    {    
                                        if ( j+1 <=  9 && mondeCarre[i][j+1] == couleur)  
                                                {
                                                    mondeCarre[i][j+1] = joueur2;
                                                    changed = 1;
                                                }
                                        else if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur2;
                                                    changed = 1;
                                                }
                                        else if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                                                {
                                                    mondeCarre[i-1][j] = joueur2;
                                                    changed = 1;
                                                }
                                        else 
                                                {
                                                    changed = 0;
                                                }
                                    
                                    } 
                            }
                    }
            } 
    
    }
    
    affiche (mondeCarre, dim);
}

