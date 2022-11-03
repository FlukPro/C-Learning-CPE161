#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i;
	float sum;
	for(i=1;i<=100;i=i+1);
		sum=sum+1.0/(i*i);
	printf("%d",sum); 
	getch();
	return 0;

}
