 #include<stdio.h>
 
 int main (){
 	
 	
 	int x=8;
 	int y=4;
 	int a=6;
 	
 	x=y;
 	y=x-a+3;
 	printf("x:%d\n y:%d\n a:%d\n",x,y,a);
 	
 	x=4;
 	y=5;
 	a=6;
 	printf("x:%d y:%d a:%d \n",--x,++y,a++);
 	printf("x:%d y:%d a:%d\n",x,y,a); // �stte de�i�ti�i i�in altada azalt�lm�� yada artm�� hali yaz�l�yo
 	printf("x:%d y:%d a:%d\n",x--,y--,--a); /*yine �stte g�re yap�l�yo 
	                                         �nde eksiler varsa azal�r sonradan eksiler gelirse de�i�mez*{
 	
 	/* 
 	x=2 a=6 
 	x= x+ (a+1);
 	*/
 	
 	x += a+1; // �stte yazan x=x+(a+1)ile ayn� �eyi sa�lar 
 	printf("%d\n",x); // bu y�zden x de�eri 9 olur 
 	
 	x=y=a+4;
 	printf("x:%d\n y:%d\n a:%d\n ",x,y,a);
 	
 	//bittti�����
 	
 	
 }
