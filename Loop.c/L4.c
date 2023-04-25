#include<stdio.h>

int main(){
	
	int s,p;
	
	printf("Enter a Number :");
	scanf("%d",&p);
	
	s=p;
	
	while(s>=1){
		printf("%d\n",s);
		
		s-=1;
	}
	
	return 0;
}
