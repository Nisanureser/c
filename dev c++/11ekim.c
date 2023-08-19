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
	 printf("universite ortalamasýný girin:");
	 scanf("%f",&okulortalama);
	 
	 dersortalama=(vize1*3/10.0+vize2*3/10.0+final*4/10.0);
	 
	 
	 
	 if(dersortalama >= 90) {
	 	printf("Harf notunuz AA ve  ders ortalamnýz: %f",dersortalama);
	 	
	 }
	else if(dersortalama>=85 && dersortalama<90) {
		printf("harf notunuz BA ve ders ortalamýnýz: %f",dersortalama);
			
	}
	else if(dersortalama>65 && dersortalama<85){
		printf("harf notunuz DD ve ders ortlamaýz: %f",dersortalama);
		
		if(okulortalama<2.5){
			printf("seneye dersi tekrar al");
			
		}
		
	}
	else{
		printf("ders notunuz FF ve ders ortalamanýz: %f",dersortalama);
		printf("dersten kaldýnýz");
	}
	
	
	
	
	
	return 0;
}
