//& adres bilgisini almam�z� sa�l�yor
//* adresteki de�eri verir
#include<stdio.h>
int main(){
	int i=5;
	int *p=&i;
	printf("%u\n" ,p );	/*(yerini d�ner)*/
	printf("%d",*p);	/*(5 de�erini d�ner)*/
	
	return 0;
}
