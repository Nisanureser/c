#include<stdio.h>
int main(){
	
	
	int islemler;
	int bakiye=100;
	int tutar;
	
	printf("islemler \n 1:para cekme \n2: para yatirma \n3: havale yapma \n4: bakiye sorgulama \n 5: kart iade \n");
	
	printf("islemi seciniz:");
	scanf("%d",&islemler);
	
	switch (islemler){
	
	
	    case 1:
	    printf("bakiyeniz: %d \n",bakiye);
	    printf("cekilecek tutar:");
	    scanf("%d",&tutar);
	    if(tutar>bakiye){
	    	printf("bakiyeniz yetersiz.");
	    	
	    
		}
	       
		   bakiye -= tutar;
	    	printf("bakiyeniz: %d",bakiye);
	        break;
	         
	    default:
	    	
	    	printf("Bilinmeyen islem");
	    	break;
	         
	  
	    
		
		
		
 return 0;
	         
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
