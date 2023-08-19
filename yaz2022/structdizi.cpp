#include<stdio.h>
struct ogrenci{
	char isim[15];
	char soyisim[15];
	int numara;

};
int main(){
	struct ogrenci ogrenciler[3];
	int i;
	for(i=0;i<3; i++){
	
	scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);	
}
	for(i=0;i<3; i++){
	
	printf("%s %s %d",ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);	
}
	return 0;
}
