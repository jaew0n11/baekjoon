#include<stdio.h>
int main() {
	int n;
	int result=0;
	scanf("%d", &n);
	for (int i = 0;i < n+1;i++) {
		result += i;
	}
	printf("%d", result);
	return 0;
}