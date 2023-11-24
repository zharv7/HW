#include <stdio.h>

int summa (int n)
{
	int i;
	int sum = 0;
	for (i=1;i<=n; i++)
	{
		sum += i;
	}
		return sum;
}



int main(int argc, char **argv)
{
	int z;
	scanf("%d",&z);
	printf ("%d",summa (z));
	return 0;
}

