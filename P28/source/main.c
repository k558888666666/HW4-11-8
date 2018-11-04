#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void modifyArray(int b[], int x)
{
	for (int i = 0; i < x; i++)
	{
		b[i] *= 2;
	}
}
void modifyElement(int e)
{
	printf("Value in modify element is %d\n", e * 2);
}
int main()
{
	int n[SIZE] = { 0,1,2,3,4 };
	printf("Effects of passing entire array by reference: \n\n the value of the original array are: \n ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d", n[i]);
	}
	printf("\n");
	modifyArray(n, SIZE);
	printf("the value of the modify array are: \n ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d", n[i]);
	}
	printf("\nEffects of passing array element by value: \n\n the value of n[3] is: %d\n ",n[3]);
	modifyElement(n[3]);
	printf(" the value of n[3] is: %d\n", n[3]);

	system("pause");
	return 0;
}
