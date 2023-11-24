#include <stdio.h>
#include <math.h>
int zerna (int kletka)
{
	int b;
	b =  pow(2,kletka-1);
	return b;
}

int main(int argc, char **argv)
{
	int x;
	scanf("%d",&x);
	printf("%d",zerna(x));
	return 0;
}

