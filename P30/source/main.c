#include <stdio.h>
#include <stdlib.h>

void inverse(int *b)
{
	int tmp[3], i;
	for ( i = 0; i < 3; i++)
	{
		tmp[2 - i] = b[i];
	}
	for (i = 0; i < 3; i++)
	{
		 b[i] = tmp[i];
	}
}

int main()
{
	int	n[3] = { 3,5,7 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n");
	inverse(n);
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



