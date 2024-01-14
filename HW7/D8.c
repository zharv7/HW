#include <stdio.h>

void chislo (int a,int b);


int main(int argc, char **argv)
{
	int a, b;
	printf("input A:");
	scanf("%d",&a);
	printf("input B:");
	scanf("%d",&b);
	chislo(a,b);
	return 0;
}


void chislo (int a,int b)
{

	
		if (a < b)
		{
			printf ("%d ",a);
			a++;
			chislo (a,b);
			
		}	
		
		
		else if (a > b)
		{
			
			printf("%d ", a);
			a--;
			chislo(a,b);
		}
		else
		{
			printf("%d",a);
			
		}
			
				
}
	
		
	
	
		
		
		
	

