#include "../libft.h"
#include <stdio.h>
#include <string.h>

void printArray(char arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int n = 10;
    char arr[n];
	char arr1[n];

    printf("\nTEST ft_bzero()\n");
	// Fill array with 2.
    memset(arr, '2', n*sizeof(arr[0]));
	bzero(arr, 5);
    printf("ER:Array after bzero()\n");
    printArray(arr, n);

    // Fill array with 2.
    memset(arr1, '2', n*sizeof(arr[0]));
    ft_bzero(arr1, 5); 
    printf("\nAR:Array after bzero()\n");
    printArray(arr1, n); 
    return 0;
}
