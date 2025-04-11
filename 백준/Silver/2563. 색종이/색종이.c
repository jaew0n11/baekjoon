#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	
	int a[100][100] = {0};
	int n;
	int s = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int x;
		int y;
		scanf("%d%d", &x, &y);
		for (int j = x;j < x + 10;j++) {
			for (int k = y; k < y + 10;k++) {
				a[j][k] = 1;
			}
		}
	}
	for (int j = 0;j < 100;j++) {
		for (int k = 0; k < 100;k++) {
			s+= a[j][k];
		}
	}
	printf("%d", s);
	
	return 0;
	
}
