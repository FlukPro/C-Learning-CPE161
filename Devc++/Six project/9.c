#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i;
	int start,stop;
	float sum= 0;
	scanf("%d",&start);
	scanf("%d",&stop);
	for(i=start;i<=stop;i++)
	{
		printf("%d", i);
		sum += i;
	}
	printf("")
}
