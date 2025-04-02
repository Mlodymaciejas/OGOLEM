#include<stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    
    while(number>1){
        printf("%d, ",number);
        number -=2;
    }
    printf("1");
    return(0);
}