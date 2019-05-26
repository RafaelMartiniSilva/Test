#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

	time_t curtime;
	struct tm *loc_time;

	// Get current time of system
	curtime = time(NULL);

	// Convertung current time to local time
	loc_time = localtime(&curtime);

	// Displaying date and time in standard format
	printf("\n\t%s\n\n", asctime(loc_time));

	return 0;

}
