//Second7
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	float radius,n2;
	printf ("Sphere Volume\n");
	printf ("Radius = ", radius);
	scanf("%f", &radius);
	n2 = 4.0/3.0*3.14159*radius*radius*radius;
	printf("Sphere Volume = %f", n2);
	getch();
	return 0;
}
