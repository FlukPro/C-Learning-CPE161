///First Project
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


main()
{
	system("color a");
	float  longbase, shortbase, altiude, area;
	printf("Longbase = ");
	scanf("%f", &longbase);
	printf("Shortbase = ");
	scanf("%f", &shortbase);
	printf("Altiude = ");
	scanf("%f", &altiude);
	area = 0.5 *  (longbase + shortbase) * altiude  ;
	printf("Area = %f", area);
	getch();
	return 0;
}
