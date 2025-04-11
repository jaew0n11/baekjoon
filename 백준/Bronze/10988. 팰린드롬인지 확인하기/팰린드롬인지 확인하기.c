#include<stdio.h>
int main() {
	char n[101];
	int result = 1;
	scanf("%s", &n);
	for (int i = 0;i < strlen(n) / 2;i++) {
		if (n[i] != n[strlen(n) - i-1]) {
			result = 0;
		}
	}
	printf("%d", result);

}
