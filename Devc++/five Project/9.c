#include<stdio.h>
#include<conio.h>
main()
{
	int A = 0;
	printf("Score : ");
	scanf("%i", &A);
	switch ( A )
	{
		case 80 ... 100: printf("A");break;
		case 75 ... 79: printf("B+");break;
		case 70 ... 74: printf("B");break;
		case 65 ... 69: printf("C+");break;
		case 60 ... 64: printf("C");break;
		case 55 ... 59: printf("D+");break;
		case 50 ... 54: printf("D");break;
		default : printf("F");
	}
	getch();
	return 0;
}
