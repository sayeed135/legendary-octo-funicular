// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a,b;
    char op;
    printf("enter your choice of arthematic operation");
    scanf("%c",&op);
    printf("enter your two numbers");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
        printf("addition is %d",a+b);
        break;
        case '-':
        printf("subtraction is %d",a-b);
        break;
        case '*':
        printf("multiplication is %d",a*b);
        break;
        case '/':
        printf("quotient is %d",a/b);
        break;
        case '%':
        printf("remainder is %d",a%b);
        break;
    }
    if  (a>b)
    {
        printf("\n %d is bigger than %d",a,b);
    }
    else if(a<b)
    { printf("%d is smaller than %d",a,b);
    }
    else
    printf("both are equal");
    return 0;
}