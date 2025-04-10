#include<stdio.h>
int main() {
	int n;
	int basket[100] = { 0 };
	int m;
	scanf("%d%d", &n, &m);
	
	for (int i = 0;i < m;i++) {
		int start;
		int end;
		int a;
		scanf("%d%d%d", &start, &end, &a);
		for (int j = start - 1;j < end;j++) {
			basket[j] = a;
		}

	}
	for (int i = 0;i < n;i++) {
		printf("%d ", basket[i]);
	}
}