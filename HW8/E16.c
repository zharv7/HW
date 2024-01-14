#include <stdio.h>
void input (int* arr )
{
	printf("vvedite cherez probel 10 chisel:");
	for(int n = 9; n >=0; n--)
	{
		scanf("%d",arr++);
	}
}

int main() {
    
    int arr[10];
	input(arr);
    int maxNum = arr[0];

    for (int i = 1; i < 10; i++)
     {
        if (arr[i] == maxNum) {
            printf("%d\n", maxNum);
            return 0;
        } else if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    printf("%d", maxNum);

    return 0;
}



