#include <stdio.h>
#include <conio.h>

main()
{
	int i = 7;
	double f=5.5;
	char c='w';
	
	printf("%d\n", (i>=6)&&(c=='w'));
	printf("%d\n", (i>=6)||(c==119));
	printf("%d\n", (f<11)&&(i>100));
	printf("%d\n", (c!='p')||((i+f)<=10));
	return 0;
}
