#include<stdio.h>

void triPattern(int);

int main()
{
	int level;
	printf("Enter a positive integer : ");
	scanf("%d", &level);
	if (level > 0)
	{
		triPattern(level);
	}
	else
	{
		printf("ERROR!!");
	}
	return 0;
}
void triPattern(int level)
{
	int row, star;
	for (row = 0; row < level; row++) {
		for (star = 0; star < row; star++) {
			printf("  ");
		}
		for (star = row; star < level; star++) {
			printf("* ");
		}
		printf("\n");
	}
}
