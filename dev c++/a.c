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
	printf("üniversite ortalamasý kaç");
	scanf("%f",&ortalama);
	
	dersort=(vize1+vize2+final)/3.0;
	
     if ( dersort > 60) {
		printf("dersten geçtiniz");
	}
	
	else if (dersort>50){
		
		printf("dersten bute kaldiniz.");
		
		if(ortalama<2.5) {
			printf("butu geçsen bile senye dersi al");
		}
		
	
	//	else if içine if yazýlabiliyor
		
	}
	else{ //tek satýr yazacaksak bu süslü parantezlere hiç gerek yok
		
		printf("dersten kaldýnýz!!");
	}
	
	//else if sýrasýyla gider
	
	
     return 0;
	
}


