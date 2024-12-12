#include <stdio.h>
#include <string.h>

int main(){
	char random[50];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(random, sizeof(random), stdin);
	for ( int i = 0; i < strlen(random); i ++){
		printf("%c ", random[i]);
	}
	
	return 0;
}
