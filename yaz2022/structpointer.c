#include<stdio.h>
#include<string.h>
//int a=5;
//int *p=&a;
//printf("%d",*p);
struct ogrenci{
	char isim[15];
	char soyisim[15];
	int numara;
};
int main(){
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"nisa");
	strcpy(ogrenci1.soyisim,"eser");
	ogrenci1.numara=132;
	tut=&ogrenci1;
	printf("%s,%s,%d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
	printf("%s,%s,%d",tut->isim,tut->soyisim,tut->numara);
	
	
	
	return 0;
}
