#include <stdio.h>

int main()
{
    char joueur1, joueur2;
    char tour;
    int ligne;
    int colonne;
    int coupsjoues = 0;
    int gagne = 0;

    char case11 = '-',case12 = '-',case13 = '-';
    char case21 = '-',case22 = '-',case23 = '-';
    char case31 = '-',case32 = '-',case33 = '-';

    printf ("Joueur 1 choisisez votre sybole (X ou 0): ");
    scanf("%c", &joueur1);
    while(joueur1 != 'X' && joueur1 != '0' ){
        printf("Symbole invalide. CHoisisez entre X et 0 :");
        scanf("%c", &joueur1);
    }
    if (joueur1 == 'X') {
        joueur2 = '0';
    } else {
        joueur2 = 'X';
    }
    tour = joueur1;
    
    while(coupsjoues < 9 && !gagne){
        printf( "Joueur1 : %c \n , Joueur2 : %c " , joueur1 , joueur2);
        printf("    1   |    2   |   3     \n");
        printf("--------------------------\n");
        printf("1|  %c  |   %c   |   %c   \n", case11, case12, case13);
        printf("--------------------------\n");
        printf("2|  %c  |   %c   |   %c   \n", case21, case22, case23);
        printf("--------------------------\n");
        printf("3|  %c  |   %c   |   %c   \n", case31, case32, case33);

        printf("C'est au tour du symbole [%c] " , tour);
        printf("Entrer le numéro de ligne (1 à 3) :");
        scanf("%d" , &ligne);
        printf("Entrer le numéro de colonne (1 à 3) :");
        scanf("%d", &colonne);
        while(ligne != 1 && ligne != 2 && ligne != 3 ){
            printf("Choix de ligne invalide. Choisisez entre 1, 2, 3 :");
            scanf("%d", &ligne);

        }
        while(colonne != 1 && colonne != 2 && colonne != 3 ){
            printf("Choix de colonne invalide. CHoisisez entre 1, 2, 3 :");
            scanf("%d", &colonne);
        }
        int tourvalide = 0;
        
        if(ligne == 1 && colonne == 1 && case11 == '-'){
            case11 = tour , tourvalide = 1;}
            else if (ligne == 1 && colonne == 2 && case12 == '-'){case12 = tour ; tourvalide = 1; }
            else if (ligne == 1 && colonne == 3 && case13 == '-'){case13 = tour ; tourvalide = 1; }
            else if (ligne == 2 && colonne == 1 && case21 == '-'){case21 = tour ; tourvalide = 1; }
            else if (ligne == 2 && colonne == 2 && case22 == '-'){case22 = tour ; tourvalide = 1; }
            else if (ligne == 2 && colonne == 3 && case23 == '-'){case23 = tour ; tourvalide = 1; }
            else if (ligne == 3 && colonne == 1 && case31 == '-'){case31 = tour ; tourvalide = 1; }
            else if (ligne == 3 && colonne == 2 && case32 == '-'){case32 = tour ; tourvalide = 1;}
            else if (ligne == 3 && colonne == 3 && case33 == '-'){case33 = tour ; tourvalide = 1;}
        if(!tourvalide){
            printf("Coup invalide ou case déjà occupé. Réessayer : ");
            continue;          
        }   
        if (tourvalide) {
            coupsjoues++;}
        
        if(
            (case11 == tour && case12 == tour && case13 == tour) ||
            (case21 == tour && case22 == tour && case23 == tour) || 
            (case31 == tour && case32 == tour && case33 == tour) || 
            (case11 == tour && case21 == tour && case31 == tour) || 
            (case12 == tour && case22 == tour && case32 == tour) || 
            (case13 == tour && case23 == tour && case33 == tour) || 
            (case11 == tour && case22 == tour && case33 == tour) || 
            (case13 == tour && case22 == tour && case31 == tour)    
        ) {
            printf("    1   |    2   |   3     \n");
            printf("--------------------------\n");
            printf("1|  %c  |   %c   |   %c   \n", case11, case12, case13);
            printf("--------------------------\n");
            printf("2|  %c  |   %c   |   %c   \n", case21, case22, case23);
            printf("--------------------------\n");
            printf("3|  %c  |   %c   |   %c   \n", case31, case32, case33);
            printf("\nVictoire du joueur [%c]\n", tour);gagne = 1; break;
        }

        if (tour == joueur1) {
        tour = joueur2;
            } else {
        tour = joueur1;
        }

    if (!gagne) {
        printf("Match nul\n");
    }
}
    return 0;
}
   




 
 