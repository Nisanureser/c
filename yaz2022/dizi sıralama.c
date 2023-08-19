#include<stdio.h>
//3 4 12 1 34 16 dizisini sýrala
int main(){
	int i,gecici,j;
	int	sirala[6]={3,4,12,1,34,16};
	
	for(i=0; i<6; i++){
		for(j=1; j<6-i; j++){
			if(sirala[j-1]>sirala[j]){
				gecici=sirala[j];
				sirala[j]=sirala[j-1];
				sirala[j-1]=gecici;
		}
	}
	}
	for(i=0; i<6; i++){
		printf("%d\n",sirala[i]);
	}	
	return 0;
}
