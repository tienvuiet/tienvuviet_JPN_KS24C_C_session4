#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so nguyen n: ");
	scanf("%d",&n);
	 if(n%5==0&&n%3==0){
       printf("day la so vua chia het cho 3 vua chia het cho 5"); 
   }
	else if(n%3==0){
		printf("day la so chia het cho 3\n"); 
	} else if(n%5==0) {
		printf("day la so chia het cho 5\n ") ;
	}
	return 0; 
} 
