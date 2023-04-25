#include <stdio.h>

int main () {
	
	int a = 1;
	int n;
	
	printf("Enter a positive num. : ");
	scanf("%d",&n);
	
	do{
		if (n%2==0) {
		 printf("%d\n",n);
		 }
	 	n--;
	}
	 while (a<=n);
	return 0;
}
