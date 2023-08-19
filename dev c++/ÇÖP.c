#include<stdio.h>

int main() {
	
	int n;
	int faktoriyel = 1;
	
	printf("Istediginiz sayiyi giriniz");
	scanf("%d",&n);
	
	while(n != 0) {
		printf("%d \n",n);
		faktoriyel = faktoriyel *n;
		
		n--;
		

	}
		printf("%d",faktoriyel);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
