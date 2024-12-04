#include <stdio.h>

int main()
{
	// khai bao 
	int arr[5]={20,5,31,10,66};	
	int n=5;
	
	// in ra mang ban dau 
	printf("Mang ban dau la:\n");
	for (int i = 0; i < n; i++) {
		printf("%d,",arr[i]);
	}
	printf("\n"); 
	// doi phan tu
	for (int i = 1; i < n; i++) { 
	int j=i-1;
	int key = arr[i]; 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
    }
	// in ra mang sau khi sap xep
	printf("Mang sau khi sap xep la:\n"); 
	for (int i = 0; i < n; i++) {
		printf("%d,",arr[i]);
	}
	return 0;

 }

