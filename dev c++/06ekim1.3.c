
	 //GÝRÝÞ ÇIKIÞ FONKSÝYONLARI
	 /*EKRANA BASTIRMAK ÝSTEDÝÐÝÝZDE PRÝNTF
	 KULLANICDAN ALMAK ÝSTERSEK SCANF scanf("%f",&x) x deðerini tanýmlar
	 */
	 
	 #include<stdio.h>
	 #define PI 3.14 //sabit sayýlar
	 int main(){
	 	
	 	int yaricap; //bunlar mainin altýnda olmak ZORUNDA
	 	float hacim;
	 	
	 	printf("Kurenin yaricapini giriniz:");
	 	scanf("%d", &yaricap); //yarýçapý sorduðu için %d kullanýyoruz üstte int olarak tanýmladýk!!
	 	
	 	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	 	printf("kurenin hacmi %f 'dir",hacim); //DAHA AZ VÝRGÜL ÝSTERSEK %.3F ÞEKLÝNDE YAZABÝLÝRÝZ.
	 	
	 	
	 	
	 	
	 	
	 	return 0;
	 }
	 
	 

