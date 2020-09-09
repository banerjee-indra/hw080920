#include "stdio.h"

main()
{
	int h;
	printf("Please enter the time in HH format: ");
	scanf("%d",&h);
	h=h%24;
	if(h>12)
		printf("PM\n");
	else
		printf("AM\n");
}
