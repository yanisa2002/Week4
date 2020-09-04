#include<stdio.h>

int main() {
	int level,row,star ;
	printf("Enter number : ");
	scanf_s("%d", &level);

	for (row = 0; row < level; row++) {
		for (star = 0; star <= row; star++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
