#include<stdio.h>
#include<conio.h>
main()
{
	float A;
	printf("Score : ");
	scanf("%f", &A);
	if (A > 79)
		printf("%f is grade A",A);
	else if (A > 74)
		printf("%f is grade B+",A);
	else if (A > 69 )
		printf("%f is grade B",A);
	else if (A > 64 )
		printf("%f is grade C+",A);
	else if (A > 59)
		printf("%f is grade C",A);
	else if (A > 54)
		printf("%f is grade D+",A);
	else if (A > 49 )
		printf("%f is grade D",A);
	else 
		printf("%f is grade F",A);
	getch();
	return 0;
}
