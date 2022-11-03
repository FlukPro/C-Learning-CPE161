#include<stdio.h>
#include<conio.h>
main()
{
	float A;
	printf("Score : ");
	scanf("%f", &A);
	if (A < 50)
		printf("%f is grade F",A);
	else if (A < 55)
		printf("%f is grade D",A);
	else if (A < 60)
		printf("%f is grade D+",A);
	else if (A < 65)
		printf("%f is grade C",A);
	else if (A < 70)
		printf("%f is grade C+",A);
	else if (A < 75)
		printf("%f is grade B",A);
	else if (A < 80)
		printf("%f is grade B+",A);
	else 
		printf("%f is grade A",A);
	getch();
	return 0;
}
