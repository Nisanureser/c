//& adres bilgisini almamýzý saðlýyor
//* adresteki deðeri verir
#include<stdio.h>
int main(){
	int i=5;
	int *p=&i;
	printf("%u\n" ,p );	/*(yerini döner)*/
	printf("%d",*p);	/*(5 deðerini döner)*/
	
	return 0;
}
