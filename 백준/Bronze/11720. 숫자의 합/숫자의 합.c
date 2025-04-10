#include<stdio.h>
int main() {
	int a;
	char n[101] = {0};
	int total = 0;
	scanf("%d%s",&a,&n);
	for (int i = 0;i < a;i++) {
		total += (int)n[i]-48;
	}
	printf("%d", total);

	return 0;
}