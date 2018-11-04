#include <stdio.h>
#include <stdlib.h>
int address(int &xref)
{
	xref++;
	printf("xref = %d\n", xref);
	
	return xref;
}

void main()
{
	
	int x = 100;
	address(x);	
	//printf("xptr=%d\n", address(x));
	printf("x=%d\n", x);
	system("pause");
}



