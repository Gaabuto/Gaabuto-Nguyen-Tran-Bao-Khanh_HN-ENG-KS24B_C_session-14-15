#include <stdio.h>
#include <string.h>

int main(){
	char random[100] = "Tay cam nhat nguyet hai trang sao The gian khong nguoi giong nhu ta";
	int  correct = 0;
	do{
	int count = 0, answer;
	printf("%s\n", random);
	printf("moi ban nhap so chu cai co trong chuoi: ");
	scanf("%d",&answer);
	for (int i = 0; i < strlen(random); i ++){
		if((random[i] >= 'A' && random[i] <= 'Z') || (random[i] >= 'a' && random[i] <= 'z')){
			count ++;
		}
	}
	if(answer == count){
		printf("chuc mung ban da dung!");
		correct ++;
	}else{
		printf("dang tiec ban da sai, vui long thu lai\n");
	}
	
}while(correct == 0);
	return 0;
}
