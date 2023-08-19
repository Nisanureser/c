#include<stdio.h>
int main(){
	//3 4 12 1 34 16 dizisini sýrala küçükten büyüðe
	int i,j,gecici;
	int sayilar[6]={3,4,12,1,34,16};
	for(i=0; i<6; i++){
		if(sayilar[i]<sayilar[i-1]){
			gecici=sayilar[i-1];
			sayilar[i-1]=sayilar[i];
			sayilar[i]=gecici;
	}
		
	}
	
	return 0;
}
