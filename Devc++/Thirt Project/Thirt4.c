#include <stdio.h>
#include <conio.h>
main()
{
	float x = 13.0, y = 10.0;
	int ten, coin;
	ten = (int)x/(int)y;
	coin = (int)x%(int)y;
	printf(" All Change of %f \n", x);
	printf(" Number of Ten Bath is %d coins. \n", ten);
	printf(" Number of One Bath is %d coins. \n", coin);
	getch();
	return 0;
}
