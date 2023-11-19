#include <stdio.h>

int main(int argc, char **argv)
{
	int a,i;
	scanf("%d",&a);
	for(i=0; a>0; i++)
	{
		a /=10;
	}
	i==3 ? printf("YES"):printf("NO");
	return 0;
}

