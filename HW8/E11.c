#include <stdio.h>

void swap(int* arr ,int i, int j);
void input (int* arr );
void increase (int* arr, int n);
void print (int* arr,int n );


int main(int argc, char **argv)
{
	int arr[10];
	input(arr);
	increase(arr, 10);
	print(arr,10);
	return 0;
}

void swap(int* arr ,int i, int j)
{
	int temp = arr[i];
	arr[i] = arr [j];
	arr[j] = temp;
}
void input (int* arr )
{
	printf("vvedite cherez probel 10 chisel:");
	for(int n = 9; n >=0; n--)
	{
		scanf("%d",arr++);
	}
}
void increase (int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i; j < n; j++)
		{
			if(arr[i]%10 > arr[j]%10)
			swap(arr,i,j);
		}
		
		
	}
		
}
void print (int* arr,int n )
{
	for (int i = 0; i < n; i++)
	printf("%d ",*arr++);
	
}
