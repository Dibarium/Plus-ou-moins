#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    int reponse, nombremystere, compteur, continuer = 1, level = 0, maxi=0;

    srand(time(NULL));


    while (continuer == 1)
    {
        printf("Grand jeu du plus ou moins !\n\n");
        printf("==== Niveau ====\n");
        printf("Niveau 1 : 1 a 100\n");
        printf("Niveau 2 : 1 a 1000\n");
        printf("Niveau 3 : 1 a 10000\n");

        scanf("%d", &level);
        if (level == 1)
            {
            maxi = 100;

            }
        else if (level == 2)
            {
            maxi = 1000;
            }
        else if (level == 3)
            {
            maxi = 10000;
            }


        compteur = 0;
        nombremystere = (rand() % (maxi - MIN + 1)) + MIN;

        while (reponse != nombremystere)
        {
            printf("\nQuel est votre nombre ?  ");
            scanf("%d", &reponse);
            if (reponse > nombremystere)
                {
                printf("C'est moins !\n");
                }
            else if(reponse < nombremystere)
                {
                printf("C'est plus !\n");
                }
            compteur++;
        }

    printf("BRAVO VOUS AVEZ REUSSI A TROUVER LE BON NOMBRE en %d coups !\n Voulez-vous retenter votre chance ?(1/0)\n", compteur);
    scanf("%d", &continuer);
    if (continuer == 1)
    {
        continuer = 1;
    }
    else if (continuer == 0)
    {
        continuer = 0;
    }

    }
}
