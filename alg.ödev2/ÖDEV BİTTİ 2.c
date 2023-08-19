#include<stdio.h>

int main(){
	int sayi,sayi1,EnBuyukPozitifSayi,EnKucukNegatifSayi,EnKucukPozifSayi,EnBuyukNegatifSayi;
	float PozitifOrt=0,NegatifOrt=0;
	int PozitifSayac=0,NegatifSayac=0,Fark=0,Toplam=0;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	sayi1=sayi;
	
	EnBuyukPozitifSayi=sayi,EnKucukNegatifSayi=sayi,EnKucukPozifSayi=sayi,EnBuyukNegatifSayi=sayi1;	
	
	while(sayi!=0){
		
	   if(sayi>0){ 
	   
	   	PozitifOrt+=sayi;
	   	PozitifSayac++ ;
	   	
	   	if(sayi>EnBuyukPozitifSayi)
	    EnBuyukPozitifSayi=sayi;
	    
	    else if(sayi<EnKucukPozifSayi)
	    EnKucukPozifSayi=sayi;
	    
	    if(EnKucukPozifSayi==sayi1 && EnKucukPozifSayi<0)
	       EnKucukPozifSayi=sayi;
	   	
	   }	
	   else{
	   	NegatifOrt+=sayi;
	   	NegatifSayac++ ;
	   	
	   	if(sayi<EnKucukNegatifSayi)
	   	EnKucukNegatifSayi=sayi;
	   	
	   	else if(sayi>EnBuyukNegatifSayi)
	   	EnBuyukNegatifSayi=sayi;
	   	
	   	if(EnBuyukNegatifSayi==sayi1 && EnBuyukNegatifSayi>0)
	   	    EnBuyukNegatifSayi=sayi;
	   	
	   	
	   } 
	   
	   	printf("Sayi giriniz:");
		scanf("%d",&sayi);
	   
	}
	
	PozitifOrt=(float)(PozitifOrt/PozitifSayac);
	NegatifOrt=(float)(NegatifOrt/NegatifSayac);
	
	if(PozitifSayac==0){
		EnBuyukPozitifSayi=0;
	    EnKucukPozifSayi=0;
	    PozitifOrt=0;
	}
	 if(NegatifSayac==0){
	    EnBuyukNegatifSayi=0;
	    EnKucukNegatifSayi=0;
	    NegatifOrt=0;
	}  
	
	//printf("EnBuyukPozitifSayi: %d , EnKucukNegatifSayi: %d , EnKucukPozifSayi: %d , EnBuyukNegatifSayi: %d \n",EnBuyukPozitifSayi,EnKucukNegatifSayi,EnKucukPozifSayi,EnBuyukNegatifSayi);
	
	printf("Pozitif sayilarin ortalamasi: %.2f \n ",PozitifOrt);
	printf("Negatif sayilarin ortalamasi: %.2f \n",NegatifOrt);
	printf("Fark: %d\n",(EnBuyukPozitifSayi-EnKucukNegatifSayi));
	printf("Toplam: %d\n",(EnKucukPozifSayi+EnBuyukNegatifSayi));
	
	return 0;
}
