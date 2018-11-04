#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n[20];

	for (int i = 0; i < 10; i++)
	{
		n[i] = 0;
	}
	printf("%s%13s\n", "Element", "value");
	for (int i = 0; i < 10; i++)
	{
		printf("%7d%13d\n",i,n[i]);
	}
	system("pause");
	return 0;
}