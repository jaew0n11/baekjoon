#include<stdio.h>
int main() {
	int x;
	int n;
	int price = 0;
	scanf("%d%d", &x, &n);
	for (int i = 0; i < n;i++) {
		int a;
		int b;
		scanf("%d%d", &a, &b);
		price += a * b;
	}
	if (price == x)printf("Yes");
	else printf("No");

}