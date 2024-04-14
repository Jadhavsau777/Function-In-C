#include <stdio.h>

int addition(int x, int y) {
    int sum;
    sum = x + y;
    return sum;
}

int multi(int x, int y) {
    int sum;
    sum = x * y;
    return sum;
}

float division(int x, int y) {
    float sum;
    sum = (float)x / y;
    return sum;
}

int main() {
    char ch;
    do {
        int a, b, c, d;
        float e;
        printf("Enter any two numbers:\n");
        scanf("%d %d", &a, &b);

        c = addition(a, b);
        d = multi(a, b);
        e = division(a, b);

        printf("The Addition Is: %d\n", c);
        printf("The Multiplication Is: %d\n", d);
        printf("The Division Is: %.2f\n", e);

        printf("Do you want to do another number? (Y/N)\n");
        fflush(stdin);
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');

    printf("Thank you!\n");

    return 0;
}

