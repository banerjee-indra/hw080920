#include "stdio.h"

main()
{
	float f1,f2,i1,i2;
	printf("Please enter the first length in Feet and Inch: ");
	scanf("%f%f",&f1,&i1);
	printf("Please enter the second length in Feet and Inch: ");
	scanf("%f%f",&f2,&i2);
	i1+=f1*12;
	i2+=f2*12;
	if(i1>i2)
		printf("Length #1 is greater\n");
	else
		printf("Length #2 is greater\n");
}
