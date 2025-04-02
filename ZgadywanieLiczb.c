#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main(){ 
    int zgadywana, wylosowana, proby = 0;
    srand(time(0));

    wylosowana = rand() % 100 + 1;

    printf(" Zgadnij liczbe od 1 do 100\n");

    do{
        printf("Podaj swoja liczbe: \n");
        scanf("%d", &zgadywana);
        proby++;
    
        if(zgadywana > wylosowana){
            printf("Za duzo!\n");
        } else if(zgadywana < wylosowana){
            printf("Za malo!\n");
        }else{
            printf("Brawo! Zgadles liczbe!\n");
        }
    } 
    while(zgadywana != wylosowana);
     
    return 0;
} */

int main(){

    int max_prob = 10;
    int wylosowana, proby = 0, zgadywana = 0;
    srand(time(0));
    wylosowana = rand() % 100 + 1;

    printf("Zgadnij liczbe od 1 do 100, w %d probach!\n", max_prob);
    
    while(proby < max_prob) {
        printf("Proba %d/%d \n", proby+1, max_prob);
        scanf("%d", &zgadywana);
        proby++;

        if(zgadywana < wylosowana){
            printf("Za malo. Podaj wieksza liczbe!\n");
        } else if(zgadywana > wylosowana){
            printf("Za duzo. Podaj mniejsza liczbe!\n");
        }else{
            printf("Trafiles IDEALNIE w %d probach!\n", proby);
            return 0;
        }
    }
    printf("Skonczyly sie proby! PRZEGRALES! LICZBA TO: %d", wylosowana);
    return 0;

}