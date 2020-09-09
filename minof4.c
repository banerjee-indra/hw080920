#include "stdio.h"

main()
{
	int n1,n2,n3,n4,min;
	printf("Please enter four numbers: ");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	if(n1<n2 && n1<n3 && n1<n4)
		min = n1;
	else if(n2<n3 && n2<n4)
		min=n2;
	else if(n3<n4)
		min=n3;
	else
		min=n4;
	printf("%d is the smallest\n",min);
}
