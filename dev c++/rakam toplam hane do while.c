#include<stdio.h>
int main(){
	int n;
	printf("istediginiz bir sayiyi giriniz:");
	scanf("%d",&n);
	int hane=0;
	int rakamlartoplami=0;
	
	do{
	rakamlartoplami += (n%10);
	hane++;	
	n= n/10;
		
	}
	while(n>0);
		
		printf("rakamlari toplami %d \n  haneli %d ",rakamlartoplami,hane);
	
	
	
	
	
	
	
	
	return 0;
}
