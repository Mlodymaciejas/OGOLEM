#include <stdio.h>

int main(){

    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
        printf("TAK");
    }
    else{
        printf("NIE");
    }
}