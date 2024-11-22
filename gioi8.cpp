#include<stdio.h>
int main(){
	int a, b, c;
	printf("nhap vao 3 canh cua tam giac:\n ");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&c+b>a){
		printf("day la 3 canh cua tam giac");
	}else{
		printf("day khong phai la 3 canh cua tam giac");
	}
	return 0;
}
