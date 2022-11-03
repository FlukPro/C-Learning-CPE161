#include<stdio.h>
#include<conio.h>
main()
{
	float A,B,C;
	printf("Price product : ");
	scanf("%f", &A);
	if (A>=5000)
	{
		B = 5000-A*10.0/100;
		printf("Price = %.0f \n", B);
	}
	else
	{
		printf("Price = %.0f \n", A);
	}
	getch();
	return 0;
}
