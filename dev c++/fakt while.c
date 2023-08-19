#include<stdio.h>
int main(){
	
	int n;
	int fakt=1;
	printf("istediginiz bir faktoriyel sayiyi giriniz:");
	scanf("%d",&n);
	
  
	
	while(n!=0){
		
		printf("%d \n",n);
		
		fakt= fakt*n;
	     n --;
	}
	printf("%d",fakt);
	
	
	
}
