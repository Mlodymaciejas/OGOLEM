#include <stdio.h>

int main(){

    int num1, num2;

    char operator;

    printf("Podaj pierwsza liczbe: \n");
    scanf("%d", &num1);
    printf("Podaj druga liczbe: \n");
    scanf("%d", &num2);

    printf("Podaj operator: \n");
    scanf(" %c", &operator);

    switch(operator){

        case '+':
        printf("%d+%d=%d\n",num1,num2,num1+num2);
        break;

        case '-':
        printf("%d-%d=%d\n",num1,num2,num1-num2);
        break;

        case '*':
        printf("%d*%d=%d\n",num1,num2,num1*num2);
        break;
    
        case '/':
        printf("%d/%d=%d\n",num1,num2,num1/num2);
        break; 

        default:
        printf("ERROR!",operator);
        break;
    }
}


    /*if(operator == '+')
        printf("%d+%d=%d", num1, num2, num1+num2);
    else if(operator == '-')
        printf("%d-%d=%d", num1, num2, num1-num2);
    else if(operator == '*')
        printf("%d*%d=%d", num1, num2, num1*num2);    
    else if(operator == '/')
        printf("%d/%d=%d", num1, num2, num1/num2);
    else 
        printf("Operator bledny! %c", operator);
    }*/

