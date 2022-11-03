#include<stdio.h>
#include<conio.h>

main()
{
	float A,B,C;
	printf("Donut : ");
	scanf("%f", &A);
	if (A>8)
	{
		B = A*20;
		printf("Price = %.0f \n", B);
	}
	else
	{
		C = A*25;
		printf("Price = %.0f \n", C);
	}
	getch();
	return 0;
}
