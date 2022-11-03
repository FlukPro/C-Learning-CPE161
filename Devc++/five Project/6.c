#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int A;
	printf("Number : ");
	scanf("%d", &A);
	if ((A%2)==0)
	printf("%d Number is even", A);
	else
	printf("%d number is odd", A);
	getch();
	return 0;
}
