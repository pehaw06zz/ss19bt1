#include<stdio.h>
#define maxSize 100
void nhapMang(int arr[],int *n){
	printf("nhap so luong phan tu: ");
	scanf("%d", n);
	printf("nhap cac phan tu: \n");
	for(int i = 0 ; i < *n; i++){
	printf(" phan tu %d :",i+1);
	scanf("%d",&arr[i]);
	}	
		
}
void hienthiMang(int arr[],int n){
	printf("cac phan tu trong mang la: \n");
	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int dodaiMang(int n){
	return n;
}
int tinhTong(int arr[],int n){
		int tong = 0;
	for (int i = 0 ;i < n; i++){
		tong +=arr[i];
	}
	return tong;
}
int timMax(int arr[],int n){
	int max = arr[0];
	for( int i = 0; i < n;i++){
		if (arr[i] > max){
		max = arr[i];
		}	
	}
	return max;
}
int main(){
	int arr[maxSize],n = 0, choice;
	do{
		printf("\n----------MENU----------\n");
		printf("1. nhap vao so phan tu\n");
		printf("2. hien thi cac phan tu\n");
		printf("3. tinh do dai mang\n");
		printf("4. tinh tong cac phan tu trong mang\n");
		printf("5. hien thi phan tu lon nhat\n");
		printf("6. thoat\n");
		printf("nhap lua chon cua ban: ");
		scanf("%d",&choice);
		
		switch(choice)	{
			case 1: 
			nhapMang(arr,&n);
			break;
		    case 2: 
		    hienthiMang(arr,n);
		    break;
		    case 3:
		    printf("do dai cua mang: %d\n",dodaiMang(n));
		    break;
		    case 4: 
		    printf("tong cac phan tu: %d\n",tinhTong(arr,n));
		    break;
		    case 5:
		    printf("hien thi phan tu lon nhat: %d\n",timMax(arr,n));
		    break;
		    case 6:
		    printf("thoat chuong trinh\n");
		    break;
		    default:
		    printf("lua chon khong phu hop, vui long nhap lai\n");
		}
	}while(choice !=6);
	return 0;
}
