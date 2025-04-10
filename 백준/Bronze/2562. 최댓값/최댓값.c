#include<stdio.h>
int main() {
	int max;
	int loc = 1;
	scanf("%d", &max);
	for (int i = 1;i < 9;i++) {
		int a;
		scanf("%d", &a);
		if (a > max) {
			max = a;
			loc = i + 1;
		}
	}
	printf("%d %d", max, loc);
	return 0;
}