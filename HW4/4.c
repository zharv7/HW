#include <stdio.h>

int main(void)
{
	int max, min;
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a>b ? a:b;
	max = c>max ? c:max;
	max = d>max ? d:max;
	max = e>max ? e:max;
	min = a<b ? a:b;
	min = c<min ? c:min;
	min = d<min ? d:min;
	min = e<min ? e:min;
	printf("%d", min+max);
	return 0;
}

