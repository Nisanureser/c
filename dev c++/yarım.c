#include<stdio.h>
int main(){
	
	int islem;
	int bakiye=2500;
	int tutar ;
	
	printf("işlemler\n1: para çekme \n2: para yatırma \n3:havale yapma \n4: bakiye sorgulama \n5: kart iade");
	
		printf("işlemi seçiniz:");
		scanf("%d" , &islem);
		
		switch(	islem){
			case 1: 
			printf("bakiyeniz: %d \n ",bakiye);
			printf ("çekilecek tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				
				printf("bakiyeniz yetersiz.");
				
				bakiye -=tutar;
				printf("bakiyeniz: %d \n ",bakiye);
				break; //sonlandırdığını gösterir sonlandırmazsak diğer caselere grier
			}
				
			case 2:
				printf("bakiyeniz: %d \n", bakiye);
				printf("yatırılacak tutar:");
				scanf("%d",&tutar);
				
			 bakiye += tutar;
			 printf("bakiyeniz: %d \n",bakiye);
			 break;
				
			case 3:
				printf("bakiyeniz: %d \n", bakiye);
				printf("havale yapılacak tutar:");
				scanf("%d",&tutar);
				if(tutar>bakiye){
					printf("bakiyeniz yetersiz.");
				}
					bakiye -= tutar;
					printf("bakiyeniz %d \n", bakiye);
					break;
					
				
				
				
			case 4:
				printf("bakiyeniz %d \n",bakiye);
				break;
				
				
			case 5:
				printf("kart iade edildi.");
				break;
				
				
		  default:
		  	printf("bilinmeyen işlem");
					
					
			
			
			
			
		return 0;	
		}
		
			 	
	
	
	
	
	
}
