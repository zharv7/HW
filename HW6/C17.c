#include <stdio.h>
int summa (int s)
{
	int sum =0;
	for (;s>0;s /=10)
	{
		sum += s%10;
	}
	return sum;
}
int ymn (int y)
{
	int x = 1;
	for (;y>0;y /=10)
	{
		x *= y%10;
	}
	return x;
}

int main(int argc, char **argv)
{	int c; 
	scanf("%d",&c);
	summa(c)==ymn(c) ? printf("YES"):printf("NO");
	return 0;
}

