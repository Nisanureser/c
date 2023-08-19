#include<stdio.h>
int main (){
	int sayi,pozbuyuk,pozkucuk,negkucuk,negbuyuk;
	float poztoplam,negtoplam;
	int p=0;
    int n=0;
	pozkucuk=sayi;
	pozbuyuk=sayi;
	negkucuk=sayi;
	negbuyuk=sayi;
	do{
		
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	}
		
	while(sayi!=0);


	if(sayi>0){
	p++;
	poztoplam+=sayi;
 
		 
  
            if(pozkucuk > sayi)
                pozkucuk = sayi;
            
            if(pozbuyuk < sayi)
                pozbuyuk = sayi;
         
		   
	}
	
	if  (sayi<0){
	n++;
	negtoplam+=sayi;

		if(sayi<negkucuk){
	      negkucuk=sayi;
     	}
		if (sayi>negbuyuk){
		  negbuyuk=sayi;
		    
     	}

	}		

	
	
	printf(" pozitif ortalama:  %.2f \n ",(poztoplam/p));
	printf("negatif ortalama: %.2f \n",(negtoplam/n));
	 
	printf("pozitif en buyuk sayi: %d \n",pozbuyuk);
	printf("pozitif en kucuk sayi: %d \n",pozkucuk);
    printf("negatif en buyuk sayi: %d \n",negbuyuk);
	printf("negatif en kucuk sayi: %d \n",negkucuk);
	   
	   
	   
	return 0;
}
