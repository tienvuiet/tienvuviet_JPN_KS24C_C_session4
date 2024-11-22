#include<stdio.h>
int main(){
	int ngay, thang, nam;
	printf("nhap vao ngay thang nam :");
	scanf("%d%d%d",&ngay,&thang,&nam);
	if(ngay>0&&ngay<32){
		printf("ngay nhap vao hop le\n");
	}else{
		printf("ngay nhap vao khong hop le\n");
	}
	if(thang>0&&thang<13){
		printf("thang nhap vao hop le\n");
	}else{
		printf("thang nhap vao khong hop le\n");
	}
	if(nam>0){
		printf("nam nhap vao hop le\n");
	}else{
		printf("nam nhap vao khong hop le\n");
	}
	return 0;
}
