#include <stdio.h>

int main()
{
	// khai bao
	int arr[5]={20,5,31,10,66};
	
	int i,j,num; 
	
	printf("Moi ban nhap 1 phan tu bat ki:");
	scanf("%d",&num);
	for(i=0;i<=5;i++){
		if(arr[i]==num){
		printf("Co phan tu %d o vi tri %d",num,i+1);	
		return 1;
		}
	}
	printf("Khong co phan tu ma ban can tim"); 
	return 0;

 }

