#include<stdio.h>
int main ()
{
    double a,b;
    char op;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    printf("enter two numbers:");
    scanf("%lf %lf",&a,&b);
    switch (op)
    {
    case '+':
    {

        printf("the addition of these two numbers %.1lf and %.1lf is %.1lf",a,b,a+b);
        break;

    }
    case '*':
    {

        printf("the multiplication of these two numbers %.1lf and %.1lf is %.1lf ",a,b,a*b);
        break;

    }
    case '/':
    {

        printf("the division of these two numbers %.1lf and %.1lf is %.1lf",a,b,a/b);
        break;

    }

    case '-':
    {

        printf("the substraction of these two numbers %.1lf and %.1lf is %.1lf",a,b,a-b);
        break;


    }
    default:
        printf("invalid input");
    }
    return 0;
}

