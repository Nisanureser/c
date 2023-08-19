#include<stdio.h>

int main() {
	
	int n, basamaksayisi = 0, rakamlartoplami = 0;
	
	printf("Sayi giriniz: ");
	scanf("%d",&n);
	
	do {
	
	rakamlartoplami += (n %10);
	
	basamaksayisi++;
	
	n = n/10;
	
		
		
		
		
		
		
	}
	while(n>100);
	printf("Rakamlari toplami %d Basamak sayisi %d",rakamlartoplami, basamaksayisi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
