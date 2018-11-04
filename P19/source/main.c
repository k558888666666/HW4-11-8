#include <stdio.h>
#include <stdlib.h>
int main()
{
	char string1[20];
	char string2[]="String literal";

	printf("ENTER : ");
	
	scanf_s("%s", string1,20);
	
	
	printf("string1 is:%s \n string2 is:%s\n", string1, string2);
	printf("string1 with space between characters is:\n" );
	for (int i = 0; string1[i] != '\0'; i++)
	{
		printf("%c ", string1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
