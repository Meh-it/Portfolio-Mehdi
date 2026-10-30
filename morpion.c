#include <stdio.h>

int main()
{
    char joueur1, joueur2;//REPRESENTE LE JOUEUR SELON LE SYMBOLE
    char tour;//REPRESENTE LE NOMBRE DE TOURS ET QUI JOUE
    int ligne;//REPRESENTE LES LIGNES DU PLATEAU
    int colonne;//REPRESENTE LES COLONNES DU PLATEAU
    int coupsjoues = 0;//REPRESENTE LE NOMBRE DE COUPS JOUES
    int gagne = 0;//INDICATEUR DE GAGNANT SI = 1
    //DEFINITION DES CASES '-' DONC VIDE
    char case11 = '-',case12 = '-',case13 = '-';
    char case21 = '-',case22 = '-',case23 = '-';
    char case31 = '-',case32 = '-',case33 = '-';
    //CHOIX DU SYMBOLE X OU O
    printf ("Joueur 1 choisisez votre sybole (X ou O): ");
    scanf("%c", &joueur1);
    while(joueur1 != 'X' && joueur1 != 'O' ){
        printf("Symbole invalide. Choisisez entre X et O :");
        scanf("%c", &joueur1);
    }
    //NORMALISER EN MAJUSCULE
    if (joueur1 == 'x' ){
        joueur1 = 'X';
    }
    if (joueur1 == 'o' ){
        joueur1 = 'O';
    }
    //DISTRIBUTION AUTOMATIQUE DU SYMBOLE RESTANT
    if (joueur1 == 'X') {
        joueur2 = 'O';
    } else {
        joueur2 = 'X';
    }
    tour = joueur1;
    //BOUCLE DU JEU COUP INFERIEUR A 9 ET PAS DE GAGNANT CA CONTINUE
    //AFFICHAGE DU PLATEAU
    while(coupsjoues < 9 && !gagne){ 
        printf( "Joueur1 : %c \n , Joueur2 : %c " , joueur1 , joueur2);
        printf("    1   |    2   |   3    \n");
        printf("--------------------------\n");
        printf("1|  %c  |   %c   |   %c   \n", case11, case12, case13);
        printf("--------------------------\n");
        printf("2|  %c  |   %c   |   %c   \n", case21, case22, case23);
        printf("--------------------------\n");
        printf("3|  %c  |   %c   |   %c   \n", case31, case32, case33);
        //ENTRER LES COORDONNEES
        printf("C'est au tour du symbole [%c] " , tour);
        printf("Entrer le numéro de ligne (1 à 3) :");
        scanf("%d" , &ligne);
        printf("Entrer le numéro de colonne (1 à 3) :");
        scanf("%d", &colonne);
        //VERIFIER LE CHIFFRE ECRIS LIGNE
        while(ligne != 1 && ligne != 2 && ligne != 3 ){                          
                                                                            
            printf("Choix de ligne invalide. Choisisez entre 1, 2, 3 :");          
            scanf("%d", &ligne);
            while (getchar() != '\n');

        }
        //VERIFIER LE CHIFFRE ECRIS COLONNE
        while(colonne != 1 && colonne != 2 && colonne != 3 ){
            printf("Choix de colonne invalide. CHoisisez entre 1, 2, 3 :");
            scanf("%d", &colonne);
            while (getchar() != '\n');
        }
        //VERIFICATION DISPONIBILITE DE LA CASE 
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
        //VERIFICATION VICTOIRE ET MIS A JOUR / AFFICHAGE DU PLATEAU
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
        //CHANGEMENT DE JOUEUR
        if (tour == joueur1) {
        tour = joueur2;
            } else {
        tour = joueur1;
        }
        //PAS DE GAGNANT = MATCH NUL
    if (!gagne) {
        printf("Match nul\n");
    }
}
    return 0;
}
   




 
 