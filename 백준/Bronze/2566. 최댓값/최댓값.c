#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	int A[9][9];
	int max = 0;
	int max_c = 0;
	int max_r = 0;
	for (int i = 0;i < 9;i++) {
		for (int j = 0; j < 9;j++) {
			int a;
			scanf("%d", &a);
			if (a > max) {
				max = a;
				max_c = i;
				max_r = j;
			}
				A[i][j] = a;
		}
	}
	printf("%d\n%d %d", max, max_c+1, max_r+1);
	return 0;
	
}
