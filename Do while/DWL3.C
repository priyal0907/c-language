#include<stdio.h>

int main(){
	
	int n;
	
	
	printf("\n Enter the Number : ");
	scanf("%d",&n);
	
	int i=1;
	
	do{
		printf("\n%d",i);
		i++;
	}while(i<=n);
	
	printf("\n Thank You");
	
	return 0;
}
