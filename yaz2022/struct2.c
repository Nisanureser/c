#include<stdio.h>
struct araba{ 
	int tekerleksayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;

}araba1;
int main(){
	struct araba araba1 = {4,6,2011,3.0,300};
	printf("%d,%d,%d,%.2f,%d",araba1.tekerleksayisi,araba1.vitessayisi,araba1.model,araba1.motor,araba1.beygir);
	
	return 0;
}
