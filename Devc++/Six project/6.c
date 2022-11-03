#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i,c;
	float n,s,a;
	printf("What do you like number 0-9?\n");
	scanf("%d",&c);
	for (i=1;i<=c;i++)
	{
		printf("choose 3 from 1-9")
		scanf("%f",&n);
		s+=n;
	}
	printf("\nThe summation of  %f\n",s);
	a = s/c;
	printf("\nThe average value is %f",a);
	getch();
	return 0;
}
