

#include <stdio.h>

void print_num (int x);


int main(int argc, char **argv)
{
	int y;
	scanf("%d",&y);
	print_num(y);
	return 0;
}

void print_num (int x)
{
	int b;
	b = x%10;
	x /= 10;
	if (x>0)
	print_num(x);
	printf("%d ",b);
}
