

#include <stdio.h>

int main(int argc, char **argv)
{
	int chislo;
	scanf("%d",&chislo);
	// clislo - abc
	int a, b, c;
	c = chislo%10;
	b = (chislo/10)%10;
	a = (chislo/100)%10;
	printf("%d",a*b*c); 
 
	return 0;
}

