#include<stdio.h>
#include<conio.h>

main()
{
	float A;
	printf("Donut : ");
	scanf("%f", &A);
	if (A>8)
		printf("Price = %.0f \n", A*20);
	else
	    printf("Price = %.0f \n", A*25);
	getch();
	return 0;
}
