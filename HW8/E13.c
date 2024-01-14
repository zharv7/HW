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
    int newArr[10];
    int count = 0;

   input(arr);

    for (int i = 0; i < 10; i++) {
        int tensDigit = (arr[i] / 10) % 10;
        if (tensDigit == 0) {
            newArr[count] = arr[i];
            count++;
        }
    }


    for (int i = 0; i < count; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
