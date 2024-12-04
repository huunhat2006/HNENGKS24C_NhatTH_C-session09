#include <stdio.h>

int main()
{
	// khai bao 
	int arr[5]={20,5,31,10,66};
	int j,num;
	int n=5;
	int mang[n]; 
    int check = 0; 
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
	 
	// yeu cau nhap phan tu va tim kiem 
	printf("Moi ban nhap 1 phan tu bat ki:");
	scanf("%d",&num);
	// tim kiem 
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            mang[check] = i+1;
            check++;
        }
    }
    if (check > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ",num);
        for (int i = 0; i < check; i++) {
            printf("%d ", mang[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n",num);
    }
	return 0;

 }

