#include<stdio.h>

int main(){
	
	int n;
	
	
	printf("\n Enter the Number : ");
	scanf("%d",&n);
	
	int i=n;
	
	do{
		printf("\n %d",i);
		i--;
	}while(i>=1);
	
	printf("\n Thank You");
	
	return 0;
}
