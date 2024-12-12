#include <stdio.h>
#include <string.h>

int main() {
    char random[100];
    printf("Nhap vao 1 chuoi bat ky: ");
    fgets(random, sizeof(random), stdin);
    for ( int i = 0; i < strlen(random);i ++){
    	if (random[i - 1] == ' ' && random[i] != ' '){
    		if(random[i] >= 'a' && random[i] <= 'z'){
    			random[i] = random[i] - ('a' - 'A');
			}
		}
	}
 	printf("Chuoi sau khi viet hoa chu cai dau: %s\n", random);

    return 0;
}
