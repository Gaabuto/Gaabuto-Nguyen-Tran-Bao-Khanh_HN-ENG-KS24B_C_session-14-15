#include <stdio.h>
#include <string.h>

int main() {
    char del, random[100];
    printf("Nhap vao 1 chuoi bat ky: ");
    fgets(random, sizeof(random), stdin);
    int done;
    printf("moi ban nhap ky tu can xoa: ");
    scanf("%c",&del);
    for ( int i = 0; i < strlen(random); i ++){
    	if(random[i] != del){
    		random[done++] = random[i];
		}
	}
	printf("%s",random);
    return 0;
}
