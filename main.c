#include <stdio.h>
#include <stdlib.h>

int main() {
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
}
