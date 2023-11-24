#include <stdio.h>


int middle (int a,int b)
{
	return (a+b)/2;
}

int main(int argc, char **argv)
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",middle(x,y));
	return 0;
}

