#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	printf("Money : ");
	float all,x, y = 10, z = 5, a = 100, b = 20, c = 50, d = 1000;
	scanf("%f", &x);
	int onethousand, onehundred, fifty, Twenty, ten, coin, five;
	onethousand = (int)x/(int)d;
	onehundred = (int)x/(int)a;
	fifty = (int)x/(int)c;
	Twenty = (int)x/(int)b;
	ten = (int)x/(int)y;
	five = (int)x%(int)y/(int)z;
	coin = (int)x%(int)y%(int)z;
	printf(" All Change of %f \n", x);
	printf(" Number of One thousand Bath is %d coins. \n", onethousand);
	printf(" Number of One hundren Bath is %d coins. \n", onehundred);
	printf(" Number of fifty Bath is %d coins. \n", fifty);
	printf(" Number of Twenty Bath is %d coins. \n", Twenty);
	printf(" Number of Ten Bath is %d coins. \n", ten);
	printf(" Number of Five Bath is %d coins. \n", five);
	printf(" Number of One Bath is %d coins. \n", coin);
	printf(" All Number coin = %d ",all=onethousand*onehundred*fifty*Twenty*ten*five*coin);
	while(all>=0);
}

