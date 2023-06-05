#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char login[31];
	int i;
	int acc = 0;
	int a = 0x1234;
	int b = 0x5678;
	int x = 0;
	printf("Please, input the login with only A-Z letters, max size 30 symbols:\n");
	scanf("%30s", login);
	printf("%s and length %d\n", login, strlen(login));
	for (i=0;i<strlen(login); i++) {
		int j = (int)login[i];
		acc += j;
		printf("%d %d and %X  %X \n", acc,  j, acc,  j);
	}
	printf("%d and %X\n", acc, acc);
	x = acc ^ a ^ b;
	printf("The serial number is %d", x);
	return 0;
}