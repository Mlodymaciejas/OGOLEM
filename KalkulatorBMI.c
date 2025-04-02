#include <stdio.h>


int main(){

    float wzrost, waga, BMI;

    printf("----- KALKULATOR BMI-----");
    printf("--------- \n");

    printf("Podaj swoj wzrost: ");
    while(scanf("%f",&wzrost) != 1 || wzrost <=0){
        printf("Bledy wzrost. Podaj jeszcze raz: ");
        while(getchar() != '\n');
    }


    printf("Podaj swoja wage: ");
    while(scanf("%f", &waga) != 1 || waga <=0){
        printf("Bledna waga. Podaj jeszcze raz: ");
        while(getchar() != '\n');
    }

    wzrost /= 100;
    BMI = waga/(wzrost*wzrost);

    printf("Twoje BMI wynosi %.2f\n", BMI);

    printf("Twoj stan odzywienia to: ");
    if(BMI < 16.0){
        printf("Wyglodzenie\n");
    }else if(BMI < 17.0){
        printf("Wychudzenie\n");
    }else if(BMI < 18.5){
        printf("Niedowaga\n");
    }else if(BMI < 25){
        printf("Wartosc prawidlowa\n");
    }else if(BMI < 30){
        printf("Nadwaga\n");
    }else if(BMI < 35){
        printf("Otylosc I stopnia");
    }else if(BMI < 40){
        printf("Otylosc II stopnia\n");
    }else{
        printf("Otylosc III stopnia\n");
    }
    return 0;
}