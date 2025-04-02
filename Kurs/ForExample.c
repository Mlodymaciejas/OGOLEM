#include <stdio.h>

int main()
{
    int lastNumber;

    printf("Podaj liczbe:\n");
    scanf("%d",&lastNumber);

    for(int i=1; i<=lastNumber; i++){
        printf("%d^2=%d\n", i,i*i);

    }
}