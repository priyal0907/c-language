#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100],c;
	int count=0;
	printf("Enter string : ");
	gets(str);
	
	for(c='a'; c<='z'; c++){
		
		count=0;
		for(i=0; str[i] !=NULL; i++){
			if(c==str[i])
			count++;
		}
		if(count>0)
		printf("%c %d\n",c,count);
	}
	
	return 0;
}
