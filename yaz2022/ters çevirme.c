#include<stdio.h>
#include<string.h>
void terscevir(char dizi[]){
//	derya			//origami
//  ayred			//imagiro
	int i,uzunluk,gecici;
	uzunluk=strlen(dizi);
	
	for(i=0; i<uzunluk/2; i++){
		
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-1-i]; 
		dizi[uzunluk-1-i]=gecici;
	}
	
}
int main(){
	
 char dizi[10];
 printf("kelime gir:\n");
 scanf("%s",&dizi);
 
terscevir(dizi);
printf("%s",dizi);
	
	
	
	
	
	
	return 0;
}
