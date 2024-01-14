#include <stdio.h>

void chislo (int x)
{
	int b;
	b = x%10;
	printf("%d ",b);
	x /= 10;
	if(x>0)
	chislo(x);
}


int main(int argc, char **argv)
{
	int y;
	scanf("%d",&y);
	chislo(y);
	return 0;
	
	
	return 0;
}

