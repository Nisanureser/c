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
 	printf("x:%d y:%d a:%d\n",x,y,a); // üstte deðiþtiði için altada azaltýlmýþ yada artmýþ hali yazýlýyo
 	printf("x:%d y:%d a:%d\n",x--,y--,--a); /*yine üstte göre yapýlýyo 
	                                         önde eksiler varsa azalýr sonradan eksiler gelirse deðiþmez*{
 	
 	/* 
 	x=2 a=6 
 	x= x+ (a+1);
 	*/
 	
 	x += a+1; // üstte yazan x=x+(a+1)ile ayný þeyi saðlar 
 	printf("%d\n",x); // bu yüzden x deðeri 9 olur 
 	
 	x=y=a+4;
 	printf("x:%d\n y:%d\n a:%d\n ",x,y,a);
 	
 	//bitttiððððð
 	
 	
 }
