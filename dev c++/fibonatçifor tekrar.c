#include<stdio.h>
int main(){
	int ilksayi=1;
	int ikincisayi=1;
	int i;
	printf("%d\n %d\n",ilksayi,ikincisayi);
	
	for(i=0; i<10; i++){
		ilksayi=ilksayi+ikincisayi;
		ikincisayi=ilksayi+ikincisayi;
		
		printf("%d\n %d\n",ilksayi,ikincisayi);
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
