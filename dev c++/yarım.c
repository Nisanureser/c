#include<stdio.h>
int main(){
	
	int islem;
	int bakiye=2500;
	int tutar ;
	
	printf("i�lemler\n1: para �ekme \n2: para yat�rma \n3:havale yapma \n4: bakiye sorgulama \n5: kart iade");
	
		printf("i�lemi se�iniz:");
		scanf("%d" , &islem);
		
		switch(	islem){
			case 1: 
			printf("bakiyeniz: %d \n ",bakiye);
			printf ("�ekilecek tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				
				printf("bakiyeniz yetersiz.");
				
				bakiye -=tutar;
				printf("bakiyeniz: %d \n ",bakiye);
				break; //sonland�rd���n� g�sterir sonland�rmazsak di�er caselere grier
			}
				
			case 2:
				printf("bakiyeniz: %d \n", bakiye);
				printf("yat�r�lacak tutar:");
				scanf("%d",&tutar);
				
			 bakiye += tutar;
			 printf("bakiyeniz: %d \n",bakiye);
			 break;
				
			case 3:
				printf("bakiyeniz: %d \n", bakiye);
				printf("havale yap�lacak tutar:");
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
		  	printf("bilinmeyen i�lem");
					
					
			
			
			
			
		return 0;	
		}
		
			 	
	
	
	
	
	
}
