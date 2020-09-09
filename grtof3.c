#include "stdio.h"

main()
{
	int n1,n2,n3,max;
	printf("Please enter three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
		max = n1;
	else if(n2>n3)
		max=n2;
	else
		max=n3;
	printf("%d is the greatest of all!\n",max);
}
