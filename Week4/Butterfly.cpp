#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter number : ");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < (2 * n) - 1; j++) {
            if (j > i && j < (2 * n - i - 2))printf("  ");
            else printf("* ");
        }printf("\n");
    }

    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < (2 * n) - 1; j++) {
            if (j > i && j <= (2 * n - i - 3))printf("  ");
            else printf("* ");
        }printf("\n");
    }
    return 0;
}

