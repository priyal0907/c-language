#include<stdio.h>
//1. C program to swap two numbers using pointers using udf.
void swap(int *a, int *b){
	int c;
	printf("Before swap A : %u => %d\n ",* a);
	printf("Before swap B : %u => %d\n ",*b);
	
	c = *a;
   *a = *b;
   *b = c;
   
   printf("\nAfter swap A : %u=> %d\n ",*a);
   printf("\nAfter swap B : %u=> %d\n ",*b);
}
int main(){
	int s,p;
	
	printf("Enter first value : ");
	scanf("%d",&s);
	
	printf("Enter first value : ");
	scanf("%d",&p);
	
	swap(&s,&p);
	
	return 0;
}

