#include<stdio.h>
int main() {
	int vize1,vize2,final;
	float okulortalama;
	float dersortalama;
	
	 printf("1.vize:");
	 scanf("%d",&vize1);
	 printf("2.vize:");
	 scanf("%d",&vize2);
	 printf("final:");
	 scanf("%d", &final);
	 printf("universite ortalamas�n� girin:");
	 scanf("%f",&okulortalama);
	 
	 dersortalama=(vize1*3/10.0+vize2*3/10.0+final*4/10.0);
	 
	 
	 
	 if(dersortalama >= 90) {
	 	printf("Harf notunuz AA ve  ders ortalamn�z: %f",dersortalama);
	 	
	 }
	else if(dersortalama>=85 && dersortalama<90) {
		printf("harf notunuz BA ve ders ortalam�n�z: %f",dersortalama);
			
	}
	else if(dersortalama>65 && dersortalama<85){
		printf("harf notunuz DD ve ders ortlama�z: %f",dersortalama);
		
		if(okulortalama<2.5){
			printf("seneye dersi tekrar al");
			
		}
		
	}
	else{
		printf("ders notunuz FF ve ders ortalaman�z: %f",dersortalama);
		printf("dersten kald�n�z");
	}
	
	
	
	
	
	return 0;
}
