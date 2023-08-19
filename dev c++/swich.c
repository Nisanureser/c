#include<stdio.h>
int main(){
	
	
	int islemler;
	int bakiye= 100;
	int tutar;
	
	printf("islemler \n 1:para cekme \n2: para yatirma \n3: havale yapma \n4: bakiye sorgulama \n 5: kart iade \n");
	
	printf("islemi seciniz:");
	scanf("%d",&islemler);
	
	switch (islemler){
	
	
	    case 1:
	    printf("bakiyeniz: %d \n",&bakiye);
	    printf("cekilecek tutar:");
	    scanf("%d",&tutar);
	    if(tutar>bakiye){
	    	printf("bakiyeniz yetersiz.");
	    	bakiye -= tutar;
	    	printf("bakiyeniz: %d",&bakiye);
	    	break;
		}
	         
	         
	         
	    case 2:
	    	printf("bakiyeniz: %d \n",&bakiye);
	    	printf("yatırılacak  tutar:");
	    	scanf("%d",&tutar);
	         
	         bakiye+=tutar;
	         printf("bakiyeniz:%d",&bakiye);
	         break;
	    case 3:
	         
	         
	    case 4:
	         
	         
	         
	  case 5:
	    
		
		
		
return 0;
	         
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
