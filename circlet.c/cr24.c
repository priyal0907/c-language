#include<stdio.h>
//    5
//   545 
//  54345 
// 5432345
//543212345
int main(){
	int i,j;
	
    for(i=1; i<=5; i++){
    	for(j=i; j<=4; j++){
    		printf(" ");
		}
		for(j=5; j>=6-i; j--){
			printf("%d",j);
		}
		for(j=7-i; j<6; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}  
