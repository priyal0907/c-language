#include<stdio.h>
//1        1
//12      21
//123    321
//1234  4321
//1234554321
int main(){
		int i,j,k;
	
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		
		for(k=4;k>=i;k--){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
