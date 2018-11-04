#include <stdio.h>
#include <stdlib.h>

void staticArrayinit()
{
	static int array1[3];
	printf("Value on entering staticarray:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("array1[%d] = %d  ", i, array1[i]);
	}
	printf("\n");
	printf("Value on existing staticarray:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("array1[%d] = %d  ", i, array1[i]+=5);
	}
	printf("\n");
}
void automativArrayinit()
{
	int array1[3] = {1,2,3};
	printf("Value on entering staticarray:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("array1[%d] = %d  ", i, array1[i]);
	}
	printf("\n");
	printf("Value on existing staticarray:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("array1[%d] = %d  ", i, array1[i] += 5);
	}
	printf("\n");
}

int main()
{
	printf("Frist call to each function:\n");
	staticArrayinit();
	automativArrayinit();
	printf("\nSecond call to each function:\n");
	staticArrayinit();
	automativArrayinit();
	printf("\n");
	system("pause");
	return 0;
}
