#include <stdio.h>

int main(){

    int number;
    int j,i;

    scanf("%d", &number);

for(i=0;i<=number;i++)
    {
    for(j=0;j<i;j++)
        printf("*");
        printf("\n");
    }
}