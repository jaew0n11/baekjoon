#include<stdio.h>
int main() {
	int a;
	char n[101];
	int result[27];
	memset(result, -1, sizeof(int) * 27);
	scanf("%s",n);
	for (int i = 0;i < strlen(n);i++) {
		if (result[(int)n[i] - 97] == -1) {
			result[(int)n[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26;i++) {
		printf("%d ", result[i]);
	}

	return 0;
}