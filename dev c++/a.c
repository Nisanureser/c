#include<stdio.h>
int main(){
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("final otunuzu giriniz:");
	scanf("%d",&final);
	printf("�niversite ortalamas� ka�");
	scanf("%f",&ortalama);
	
	dersort=(vize1+vize2+final)/3.0;
	
     if ( dersort > 60) {
		printf("dersten ge�tiniz");
	}
	
	else if (dersort>50){
		
		printf("dersten bute kaldiniz.");
		
		if(ortalama<2.5) {
			printf("butu ge�sen bile senye dersi al");
		}
		
	
	//	else if i�ine if yaz�labiliyor
		
	}
	else{ //tek sat�r yazacaksak bu s�sl� parantezlere hi� gerek yok
		
		printf("dersten kald�n�z!!");
	}
	
	//else if s�ras�yla gider
	
	
     return 0;
	
}


