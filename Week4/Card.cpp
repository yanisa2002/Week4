#include<stdio.h>

int main() {
    int input,i,j;
    printf("Enter number : ");
    scanf_s("%d", &input);

    for (i = 0; i <= input; i++)
    {
        for (j = 0; j <= input - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = input - 2; i >= 0; i--)
    {
        for (j = 0; j <= input - 2 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}