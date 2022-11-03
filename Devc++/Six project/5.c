#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i,c;
	float sum,average;
	printf("Enter the last value?\n");
	scanf("%d",&c);
	for (i=1;i<=c;i++)
	{
		printf("%d \n",i);
		sum+=i;
	}
	printf("\nThe summation of 1+2+...+%d is %f\n",c,sum);
	average= sum/c;
	printf("\nThe average value is %f",average);
	getch();
	return 0;
}
