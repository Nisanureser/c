#include<stdio.h>
int main(){
	int ilksayi=1;
	int ikincisayi=1;
	int i;
	
	printf("%d\n %d\n",ilksayi,ikincisayi);
	for(i=0; i<10; i++){
		
		int x= ikincisayi;
		ikincisayi += ilksayi;
		ilksayi=x;
		printf("%d \n",ikincisayi);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
