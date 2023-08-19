#include<stdio.h>
struct ogrenci{
	char isim[15];
	char soyisim[15];
	int numara;
};
void goster(struct ogrenci a){
	printf("%s,%s,%d",a.isim,a.soyisim,a.numara);	
}
struct ogrenci degeral(){
	struct ogrenci yeni ;
	printf("bilgi girin");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);		
	return yeni;
}
int main(){
		struct ogrenci ogrenci1= degeral();
		goster(ogrenci1);
	
	return 0;
	
}
