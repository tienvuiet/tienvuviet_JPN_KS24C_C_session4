#include<stdio.h>
int main(){
	int n;
	printf("nhap vao nam can hoi: ");
	scanf("%d",&n);
	if(n%400==0||(n%4==0&&n%100!=0)){
		printf("day la nam nhuan!!");
	}else{
		printf("day khong phai la nam nhuan");
	}
	return 0;
}
