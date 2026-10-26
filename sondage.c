#include <stdio.h>

int main()
{
    char choix;
    int voteMatrix = 0;
    int voteLeon = 0;
    int voteSpider = 0;
    int voteRoi = 0;
    int voteRim = 0;

   while(choix !='q'){

    puts("========================");
    puts("    SONDAGE TON FILME.  ");
    puts("========================");
    puts("1 pour Matrix");
    puts("2 pour Leon");
    puts("3 pour SpiderMan");
    puts("4 pour LeRoiLion");
    puts("5 pour PacificRim");
    puts("Taper un entier pour votre filme");
    scanf("%c", &choix);
 
    if (choix == '1'){
   
        voteMatrix = voteMatrix + 1;
    }
        else if (choix == '2'){

        voteLeon = voteLeon + 1;
    }
        else if (choix == '3'){
        voteSpider = voteSpider + 1;
    }
        else if (choix == '4'){
        voteRoi = voteRoi + 1;
    }
        else if (choix == '5'){
        voteRim = voteRim + 1;
    }   
       else if (choix == '@'){
            puts("===========STATISTIQUE DU SONDAGE========");
            printf("Votes pour Matrix: %d", voteMatrix);
            for(int i = 1; i<= voteMatrix; i++){
                printf("*");
            }
            printf("\n");
            printf("Votes pour Leon: %d", voteLeon);
            for(int j = 1; j<= voteLeon; j++){
                printf("*");
            }
            printf("\n");
            printf("Votes pour SpiderMan: %d", voteSpider);
            for(int k = 1; k<= voteSpider; k++){
                printf("*");
            }
            printf("\n");
            printf("Votes pour Roi: %d", voteRoi);
            for(int m = 1; m<= voteRoi; m++){
                printf("*");
            }printf("\n");
            printf("Votes pour Rim: %d", voteRim);
            for(int n = 1; n<= voteRim; n++){
                printf("*");
            }
            printf("\n");   
            
            }
    }  
   return 0;   
        
}  

   

 