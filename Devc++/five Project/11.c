#include<stdio.h>
#include<conio.h>
main()
{
	unsigned int A;
	do
	{
		printf("Enter day (1-7) : ");
		scanf("%d", &A);
		if (A == 1)
			printf("%d is Sunday",A);
		else if (A == 2)
		    printf("%d is Monday\n",A);
		else if (A == 3)
		    printf("%d is Tuesday\n",A);
		else if (A == 4)
	 	    printf("%d is Wednesday\n",A);
		else if (A == 5)
		    printf("%d is Thursday\n",A);
		else if (A == 6)
		    printf("%d is Friday\n",A);
		else if (A == 7)
		    printf("%d is Saturday\n",A);
		else
		    printf("Please Enter only 1-7\n");
	}
	while (A >= 7);
	getch();
	return 0;
}
