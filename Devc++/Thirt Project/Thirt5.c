#include <stdio.h>
#include <conio.h>
main()
{
	printf("Have 37 coin");
	float x = 38, y = 10, z = 5;
	int ten, coin, five;
	ten = (int)x/(int)y;
	five = (int)x%(int)y/(int)z;
	coin = (int)x%(int)y%(int)z;
	printf(" All Change of %f \n", x);
	printf(" Number of Ten Bath is %d coins. \n", ten);
	printf(" Number of Five Bath is %d coins. \n", five);
	printf(" Number of One Bath is %d coins. \n", coin);
	getch();
	return 0;
}
