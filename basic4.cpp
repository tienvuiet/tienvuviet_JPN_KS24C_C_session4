#include<stdio.h>
int main(){
	int n, m;
	printf("nhap vao thang n: ");
	scanf("%d",&n);
	printf("nhap vao nam m: ");
	scanf("%d",&m); 
    switch(n)
	{case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31 day");
		break;
	 case 4: case 6: case 9: case 11:
	 	printf("30 day");
	 	break;
	 case 2:
	 	if((m%400==0)&&(m%4==0&&m%100!=0)){
	 		printf(" 29 day");
		 }else{
		 	printf(" 28 day");
		 }
	 } 
	return 0; 
} 
