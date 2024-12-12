#include <stdio.h>
#include <string.h>

int main(){
	int count;
	char a, rndomorg[100] = "wqeoiujdiowsedaszcxvbvncbnvmjklhpoyuyrtewqqfipwqhefpsd8acuiujigvkfdvnuibgpqwerfnqpuwebfgpqweuf";
	printf("moi ban nhap 1 chu bat ky: ");
	scanf("%c",&a);
	for ( int i = 0; i < strlen(rndomorg); i ++){
		if ( a == rndomorg[i]){
			count ++;
		}
	}
	printf("co %d so %c trong chuoi! ",count,a);
	return 0;
}
