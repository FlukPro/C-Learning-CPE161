#include <stdio.h>
#include <conio.h>

main()
{
	int x,y,z;
	x = 4;
	y = x++;
	z = x+y;
	printf(" x = %d \t y = %d \t z = %d \n", x,y,z);
	x = 4;
	y = ++x;
	z = x+y;
	printf(" x = %d \t y = %d \t z = %d \n", x,y,z);
	x = 4;
	y = x--;
	z = x+y;
	printf(" x = %d \t y = %d \t z = %d \n", x,y,z);
	x = 4;
	y = --x;
	z = x+y;
	printf(" x = %d \t y = %d \t z = %d \n", x,y,z);
	getch();
	return 0;
}
