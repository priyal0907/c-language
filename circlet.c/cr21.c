#include<stdio.h>
//1
//2 3
//4 5 6
//7 8 9 10
//11 13 14 15
int main(){
	int i,j,count=1;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d ",count);
			count++;
	}
	        printf("\n");
	}
	
	
	
	
	return 0;
}
