#include<stdio.h>
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1
int main(){
	int r,c;
	
    for(r=5; r>=1; r--){
	for(c=5; c>=r; c--){
    if(c%2==0){
				printf(" 0");
			}
	else{
				printf(" 1");
			}
	}
		 printf("\n");
}	
	return 0;
}
