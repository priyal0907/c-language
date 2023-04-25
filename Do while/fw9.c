#include<stdio.h>

int main(){
	
	int n, sum=1, i;
	
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
	
	sum = sum*i;
	
	}
	
	printf("%d",sum);
	
	return 0;
}
