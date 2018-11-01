#include <stdio.h>
#include <stdlib.h>
/*
int i;
	int notlar[5];
	for(i=1;i<=5;i++){
		printf("%d. dersin notunu giriniz: ",i);
		scanf("%d",&notlar[i]);
	}
	printf("\n");
	for(i=1;i<=5;i++){
		printf("%d. not: %d\n",i,notlar[i]);
	}
*/

int main() {
	int a,b;
	do{
		printf("1. sayiyi girin: ");
		scanf("%d",&a);
		printf("2. sayiyi girin: ");
		scanf("%d",&b);	
		if(a<b)printf("Lutfen ilk sayiyi buyuk yazin \n");
	}while(a<b);
	
	printf("%f",cikart(a,b));
}

int topla(int haydar, int tilki){
	return haydar+tilki;
}
int cikart(int x,int y){
	return x-y;
}
int bol(){
	
}









