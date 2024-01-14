#include <stdio.h>

int s (int a, int b);
int main(int argc, char **argv)
{
	int result;
	int a;
	int b;
	printf("input chislo:");
	scanf("%d",&a);
	printf("input stepen:");
	scanf("%d",&b);
	result = s(a,b);
	printf("%d v %d stepeni = %d",a,b,result);
	return 0;
}
int s (int a, int b)
{
	
	if (b > 0)
	{
		a *= s(a, --b);
		
	}

	else if (b == 0)
	{
		return a = 1;
	}
	
	return a;
}
