#include<stdio.h>
#include<string.h>
struct adres{
	char mahalle[10];
	char cadde[10];
	char sokak[10];	
};
struct ogrenci{
	char isim[10];
	char soyisim[10];
	int numara;
	int yas;
	struct adres adress;	
};

int main(){
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"nisa");
	strcpy(ogrenci1.soyisim,"eser");
	ogrenci1.numara=132;
	ogrenci1.yas=18;
	strcpy(ogrenci1.adress.mahalle,"velibaba");
	strcpy(ogrenci1.adress.cadde,"fatih");
	strcpy(ogrenci1.adress.sokak,"seyran");
	
	printf("%s,%s,%d,%d,%s,%s,%s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adress.mahalle,ogrenci1.adress.cadde,ogrenci1.adress.sokak);
	
	
	return 0;
}
