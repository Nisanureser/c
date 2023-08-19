#include<stdio.h>
int main (){
	int sayi,pozbuyuk,pozkucuk,negkucuk,negbuyuk;
	float poztoplam,negtoplam;
	int p=0;
    int n=0;		
	
	do{

	printf("sayi giriniz:");
	scanf("%d",&sayi);

	if(sayi>0){
	p++;
	pozkucuk=sayi;
	pozbuyuk=sayi;
	poztoplam+=sayi;
 

            if(pozbuyuk < sayi)
                pozbuyuk = sayi;
            if(pozkucuk > sayi)
                pozkucuk = sayi;
      		   
	}
	
	if  (sayi<0){
	n++;
	negtoplam+=sayi;
	negkucuk=sayi;
	negbuyuk=sayi;
	 
		if (sayi>negbuyuk){
		  negbuyuk=sayi;   
     	}
		if(sayi<negkucuk){
	      negkucuk=sayi;
     	}
	}
			
}
	while(sayi!=0);
	
	 printf("pozitif ortalama:  %.2f \n ",(poztoplam/p));
	 printf("negatif ortalama: %.2f \n",(negtoplam/n));
	 
	 printf("pozitif en buyuk sayi: %d \n",pozbuyuk);
	 printf("pozitif en kucuk sayi: %d \n",pozkucuk);
     printf("negatif en buyuk sayi: %d \n",negbuyuk);
	 printf("negatif en kucuk sayi: %d \n",negkucuk);
	   
	   
	   
	return 0;
}
