#include<stdio.h>

int main(){
	int i,j,min,num;
	int start=0,mid;

	int arr[]={2,34,7,45,8,9,4,4,6,14,15,20,2};
	 int size=sizeof(arr)/sizeof(int);
	 int flag=-1;
	 int end=sizeof(arr)/sizeof(int);

	for(i=0;i<size;i++){
		min=arr[i];
		for(j=i+1;j<size;j++){
			if (arr[j]<min){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;

			}
		}




	}	for(i=0;i<size;i++){
				printf("%d\t",arr[i]);
			}

	printf("\nmoi nhap gia tri can tim: ");
	scanf("%d", &num);


	while(start<=end){
		mid=(start+end)/2;
		if (arr[mid]==num){
			printf("gia tri o vi tri: %d",mid);
			return 0;
		}else if (arr[mid]<num){
			start=mid+1;

		}else{
			end=mid-1;
		}


	} 
	printf("khong tim thay phan tu co gia tri tren");




   return 0;
}
