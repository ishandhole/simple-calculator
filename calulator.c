#include <stdio.h>
#include <math.h>

int main(){
    char op;
    double a,b,c;

    printf("Enter the operations (+, -, /, *): ");
    scanf("%c",&op);

    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);

    switch(op){
        case '+':
        c=a+b;
        printf("Output is %0.2lf",c);
        break;

        case '-':
        c=a-b;
        printf("Output is %0.2lf",c);
        break;

        case '/':
        c=a/b;
        printf("Output is %0.2lf",c);
        break;

        case '*':
        c=a*b;
        printf("Output is %0.2lf",c);
        break;

        default:
        printf("Invalid operation");

    }

}