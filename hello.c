#include<stdio.h>
#include<stdlib.h>

int main(int argn, char *argv[])
{
	system("clear");
	if (argn > 1)
	{
		printf("\n\t\tHello %s!\n\n", argv[1]);
	}
	else
	{
		printf("\n\t\tHello user!\n\n");
	}
}
