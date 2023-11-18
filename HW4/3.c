

#include <stdio.h>

int main(void)
{	int max;
	int chislo , a, b, c;
	scanf("%d", &chislo);
	a = chislo%10;
	b = (chislo/10)%10;
	c = (chislo/100)%10;
	max = a>b ? a:b;
	max = c>max ? c:max;
	printf("%d",max);
	
	return 0;
}

