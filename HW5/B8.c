#include <stdio.h>

int main(void)
{
	int a,d,c=0;
	
	for (scanf("%d",&a);a>0;a/=10)
	{
		 
		 d= a%10;
		if (d==9 )
		{
			c++;
		}
		
	}
	
	c==1 ? printf("YES"):printf("NO");
	return 0;
}

