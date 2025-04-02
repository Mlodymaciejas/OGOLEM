#include <stdio.h>

int main(){

    int number;
    int i;

    int res=1;

    scanf("%d", &number);
    while(number)
        res*=(number--);
        printf("%d",res);
        return 0;
}
//do nauki jeszcze raz

