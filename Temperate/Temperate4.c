#include<stdio.h>

int main(){
	
	int n,last,sum;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>9){
		
		n=n/10;
	}
	sum=n+last;
	printf("Sum of 1st and last digit=%d",sum);
	
	
	return 0;
}
