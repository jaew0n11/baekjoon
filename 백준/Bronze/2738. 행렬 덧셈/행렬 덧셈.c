#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int A[100][100];
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < m;j++) {
			int a;
			scanf("%d", &a);
				A[i][j] = a;
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < m;j++) {
			int a;
			scanf("%d", &a);
			A[i][j] += a;
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < m;j++) {
			printf("%d ", A[i][j]);
		}printf("\n");
	}
	
	return 0;
	
}
