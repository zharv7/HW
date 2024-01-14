#include <stdio.h>
void input (int* g);
float arif (int* g);
int main(int argc, char **argv)
{
	float c;
	int g[5];
	input (g);
	c = arif (g);
	printf("%.3f",c);
	return 0;
}

void input (int* g)
{
	printf("vvedite cherez probel 5 chisel:");
	for(int n = 4; n >=0; n--)
	{
		scanf("%d",g++);
	}
}
float arif (int* g)
{
	int sum = 0;
	float result;
	for(int n = 4; n >=0; n--)
	{
		
		
		sum += *g++;
	}
	
	result = (float)sum/5;
	return result;
}
