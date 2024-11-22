#include<stdio.h>
int main(){
	int dien1, dien2;
	printf("nhap vao so dien dau tien: ");
	scanf("%d",&dien1);
	printf("nhap vao so dien thu hai: ");
	scanf("%d",&dien2);
	if(dien2<dien1){
		printf("nhap lai ngay: ");
	}
	int tien=dien2-dien1;
	int tien1=tien*10000;
	int tien2=tien*15000;
	int tien3=tien*20000;
	int tien4=tien*25000;
	if(tien<50&&tien>=0){
		printf("so tien phai tra la: %d",tien1);
	}else if(tien>=50&&tien<100){
		printf("so tien phai tra la: %d",tien2);
	}else if(tien>=100&&tien<150){
		printf("so tien phai tra la: %d",tien3);
	}else if(tien>=150&&tien<200){
		printf("so tien phai tra la: %d",tien4);
	}
	return 0;
}
