#include <stdio.h>
int acounter(void);
int main(int argc, char **argv)
{
	int result = acounter();
	printf("%d",result);
	return 0;
}

int acounter (void)
{
	char c;
	scanf("%c",&c);
	if (c=='.')
	return 0;
	else  
	{
	if(c=='a')
	return 1 + acounter();
		else 
		return acounter();
	}
		
	
	
}
