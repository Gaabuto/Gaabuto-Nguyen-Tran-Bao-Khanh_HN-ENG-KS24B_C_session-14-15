#include <stdio.h>
#include<string.h>

int main(){
	char random[50];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(random, sizeof(random), stdin);
	fputs(random,stdout);
	printf("do dai cua chuoi vua nhap la %d",strlen(random) - 1);
}
