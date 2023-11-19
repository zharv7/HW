#include <stdio.h>
int main(void)
{
	int number, c, d;
	scanf("%d",&number);
	c = number%10;
	number/= 10;
	while (number>0)
	{
		d = number%10;
		if (c==d) 
		{
			printf("yes");
			return 0;
		}
		 
		c = d;
		number /=10;
	}
	 printf("no");
	
	return 0;
}


