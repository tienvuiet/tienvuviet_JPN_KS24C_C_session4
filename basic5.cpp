#include<stdio.h>
int main(){
	int n1, n2, n3;
	printf("nhap vao so thu nhat: ");
	scanf("%d",&n1);
	printf("nhap vao so thu hai: ");
	scanf("%d",&n2);
	printf("nhap vao so thu ba: ");
	scanf("%d",&n3);
	if(n3>n1&&n3<n2){
		printf("so thu ba nam giua so thu nhat va so thu hai");
	}else{
		printf("so thu ba khong nam giua so thu nhat va so thu hai");
	}
	return 0;
}
