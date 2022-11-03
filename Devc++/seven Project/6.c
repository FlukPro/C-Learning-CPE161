#include <stdio.h>
#include<conio.h>

main()
{
	long count ,n=0,sum;
	for (count = 1; count<=1000; count++)
	{
		if ((count%17==0)||(count%19==0))
		{
			printf("%ld\n",count);
			sum += count;
		    n++;
		}
	}
	printf("All positive : %ld\n",sum);
	printf("All divide: %ld",n);
	getch();
	return 0;
}
