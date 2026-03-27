#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char input[20];
	system("shutdown -s -t 60");
again:
	printf("你的电脑被恶魔控制，将在60s后关机，请在限时内输入 我是猪 解除控制\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0) {
		system("shutdown -a");
		printf("你很棒棒");
	}
	else {
	
		goto again;
	}

	return 0;
}