#include <stdio.h>
long long int factorial (int n)
{
	int i;
	long long int f =1;
	if (n<=20)
	{
		for (i=1; i<=n;i++)
		{
			f*=i;
			
		}
		
	}
	return f;	
}
	
	

int main(int argc, char **argv)
{
	int z;
	scanf("%d",&z);
	
	printf("%lld",factorial(z));
	return 0;
}

