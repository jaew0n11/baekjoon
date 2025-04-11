#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int a;
		scanf("%d", &a);
		printf("%d ",a / 25);
		a %= 25;
		printf("%d ", a / 10);
		a %= 10;
		printf("%d ", a/5);
		a %= 5;
		printf("%d\n", a);

	}
	
	
	
	return 0;
	
}
