#include<stdio.h>

main()
{
	int n1, n2;
	printf("Please enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	if( n1 > n2 )
		printf("%d is greater than %d\n",n1,n2);
	else
		printf("%d is greater than %d\n",n2,n1);
}
