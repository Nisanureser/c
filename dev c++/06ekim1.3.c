
	 //G�R�� �IKI� FONKS�YONLARI
	 /*EKRANA BASTIRMAK �STED����ZDE PR�NTF
	 KULLANICDAN ALMAK �STERSEK SCANF scanf("%f",&x) x de�erini tan�mlar
	 */
	 
	 #include<stdio.h>
	 #define PI 3.14 //sabit say�lar
	 int main(){
	 	
	 	int yaricap; //bunlar mainin alt�nda olmak ZORUNDA
	 	float hacim;
	 	
	 	printf("Kurenin yaricapini giriniz:");
	 	scanf("%d", &yaricap); //yar��ap� sordu�u i�in %d kullan�yoruz �stte int olarak tan�mlad�k!!
	 	
	 	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	 	printf("kurenin hacmi %f 'dir",hacim); //DAHA AZ V�RG�L �STERSEK %.3F �EKL�NDE YAZAB�L�R�Z.
	 	
	 	
	 	
	 	
	 	
	 	return 0;
	 }
	 
	 

