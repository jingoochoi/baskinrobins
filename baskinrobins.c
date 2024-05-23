#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int na = 0;
int juck;
int sum;
int game(void) {
	printf("input number (1~3):");
	scanf_s("%d", &na);
	if (na<1||3<na)
	{
		printf("input number (1~3):");
		scanf_s("%d", &na);
	}
	printf("my num=%d\n", na);
	for (int i = 0; i < na; i++)
	{
		sum++;
		printf("%d ", sum);
	}
	printf("\n");
	if (sum>=31)
	{
		printf("you lose TT");
		return;
	}
	juck = rand() % 3 + 1;
	printf("enemy num=%d\n", juck);
	for (int i = 0; i < juck; i++)
	{
		sum++;
		printf("%d ", sum);
	}
	printf("\n");
	if (sum >= 31)
	{
		printf("you win ^^");
		return;
	}
	return game();
}
int main(void) {
	srand(time(NULL));
	return game();
}