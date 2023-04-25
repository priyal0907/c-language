#include<stdio.h>

int main(){
	
	int n,sum,i=1;
	
	printf("Enter a positive number :");
	scanf("%d",&n);
	
	while(i<=n){
		
		sum=sum+i;
		
		i++;
	}
	
	printf("%d",sum);
	
	return 0;
}
