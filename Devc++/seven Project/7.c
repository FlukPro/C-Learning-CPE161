#include <stdio.h>
#include <conio.h>

main()
{
	int N,i;
	long fac = 1;
	printf("Enter N:");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		fac *= i;
	    printf("%d! = %ld",N,fac);
	}
}
