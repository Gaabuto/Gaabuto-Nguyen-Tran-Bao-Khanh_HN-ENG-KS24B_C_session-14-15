#include <stdio.h>
#include <string.h>

int main() {
    char random[100];
    int letters = 0, numbers = 0, specials = 0;

    printf("Nhap vao 1 chuoi bat ky: ");
    fgets(random, sizeof(random), stdin);
    for (int i = 0; i < strlen(random); i++) {
        if ((random[i] >= 'A' && random[i] <= 'Z') || (random[i] >= 'a' && random[i] <= 'z')) {
            letters ++;
        } else if (random[i] >= '0' && random[i] <= '9') {
            numbers ++;
        } else {
            specials ++;
        }
    }

    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", numbers);
    printf("So ky tu dac biet: %d\n", specials - 1);

    return 0;
}
