#include<stdio.h>
int main(){
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz:");
	scanf("%d",&n);
	
	while (n != 0){
		printf("%d \n ",n);
		fact = fact*n;	
		
	   n--;
	}
	printf("%d \n",fact);
	
	
	
	
	return 0;
	
	
}
