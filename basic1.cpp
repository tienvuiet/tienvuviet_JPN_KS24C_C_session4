#include<stdio.h>
int main(){
	int n;
	printf("nhap vao mot so nguyen n: ");
	scanf("%d",&n);
	if(n>0){
		printf("day la so duong");
	}else if(n==0){
		printf("day khong la so duong hay am ma la so 0");
	}else{
		printf("day la so am");
	}
	return 0;
} 
