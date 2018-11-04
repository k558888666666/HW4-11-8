#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int linearSearch(const int array[], int key, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key )
		{
			return i;
		
		

		}
	}
	return -1;
}
int main()
{
	int n[SIZE];
	int x,key,ele;

	for (int i = 0; i < SIZE; i++)
	{
		n[i] = 2 * i;
	}
	printf("Enter key:\n");
	scanf_s("%d", &key);
	ele = linearSearch(n,key,SIZE);
	if (ele != -1)
	{
		printf("Found the value in element is : %d\n", ele);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}



