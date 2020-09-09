#include "stdio.h"

main()
{
	int y;
	printf("Please enter a year: ");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0 || y%400==0)
		printf("%d is a leap year\n",y);
	else
		printf("%d is not a leap year\n",y);
}
