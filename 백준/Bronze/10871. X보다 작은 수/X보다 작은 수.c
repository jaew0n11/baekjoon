#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int val;
	scanf("%d%d",&n,&val);
	for (int i = 0;i < n;i++) {
		int a;
		scanf("%d", &a);
		if (a < val) {
			printf("%d ", a);
		}
	}

	return 0;
}