#include <stdio.h>

int addition(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int multi(int x, int y)
{
    int sum;
    sum = x * y;
    return sum;
}

float division(int x, int y)
{
    float sum;
    sum = (float)x / y;
    return sum;
}

int main()
{
    char ch;
    do
    {
        int a, b,c,d,e;
        printf("Enter Any two Numbers\n");
        scanf("%d %d", &a, &b);

        c=addition(a, b);
        d=multi(a, b);
        e=division(a, b);

        printf("The Addition Is:",c);
        printf("The Multiplication Is:",d)l
        printf("The Division Is:",e);

        printf("Do You Want to Do Another Number Y/N?\n");
        fflush(stdin);
        scanf(" %c", &ch);

    } while (ch == 'Y' || ch == 'y');
    
    if(ch=='n' ||ch=='N');
    {
    printf("ThankYou!");
    }

    return 0;
}
