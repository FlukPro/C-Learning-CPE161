#include <stdio.h>
#include <conio.h>

main()
{
	int m,n,a,b,c,d,f,x,y;
	m = 40;
	a = m++;                                                                                                          
	b = ++m;
	printf("a = %d \t b = %d \n", a,b);
	m = 40;
	a = ++m;                                                                                                          
	b = m++;
	printf("a = %d \t b = %d \n", a,b);
	m = 40;
	a = m--;                                                                                                          
	b = --m;
	printf("a = %d \t b = %d \n", a,b);
	m = 40;
	a = --m;                                                                                                          
	b = m--;
	printf("a = %d \t b = %d \n", a,b);
	m = 40;
	n = 40;
	a = m++;
	b = ++n;
	printf("a = %d \t b = %d \n", a,b);
	x = 5+(-24)*2%3;
	y = 250/4*10/2/3+8;
	printf("x = %d \t y = %d \n", x,y);
	a = 2;
	b = 4;
	c = 8;
	d = 10;
	f = 3;
	y = a+(c+d)/a*b+d/a+f+10;
	printf("y = %d \n",y);
	a = 1;
	b = 2;
	c = 3;
	d = 5;
	f = a/b*c/d;
	printf("f = %f \n", f);
	getch();
	return 0;
}
