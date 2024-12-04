#include <stdio.h>

int main()
{
	// khai bao 
	int arr[5]={20,5,31,10,66};
	int j;
	int n=5;
	
	// in ra mang ban dau 
	printf("Mang ban dau la:\n");
	for (int i = 0; i < n; i++) {
		printf("%d,",arr[i]);
	}
	printf("\n"); 
	// doi phan tu  
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // hoan doi vi tri 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
	}
	// in ra mang sau khi sap xep
	printf("Mang sau khi sap xep la:\n"); 
	for (int i = 0; i < n; i++) {
		printf("%d,",arr[i]);
	}
	return 0;

 }

