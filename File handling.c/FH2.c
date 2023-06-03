#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[100];
	
	p=fopen("Demo.txt","a");
	
	if(p==NULL){
		
		printf("Error");
	}
	else{
	
		fgets(ch,100,p);
		
		printf("%s",ch);
		
//		fputs(ch,p);
		
		fclose(p);
	}
	
	return 0;
}
