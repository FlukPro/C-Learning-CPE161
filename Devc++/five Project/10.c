#include<stdio.h>
#include<conio.h>
main()
{
	int A;
	printf("Enter day (1-7) : ");
	scanf("%d", &A);
	switch ( A )
	{
		case 1: printf("%d is Sunday\n",A);break;
		case 2: printf("%d is Monday\n",A);break;
		case 3: printf("%d is Tuesday\n",A);break;
		case 4: printf("%d is Wednesday\n",A);break;
		case 5: printf("%d is Thursday\n",A);break;
		case 6: printf("%d is Friday\n",A);break;
		case 7: printf("%d is Saturday\n",A);break;
		default : printf("Please Enter only 1-7\n");
	}
	getch();
	return 0;
}
