#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int a;
		char b[21];
		scanf("%d%s", &a, b);
		for (int k = 0;k < strlen(b);k++) {
			for (int j = 0;j < a;j++) {
				printf("%c", b[k]);
			}
		}printf("\n");
		
	}

	return 0;
}
