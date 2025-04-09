#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int price = 0;
	scanf("%d%d%d", &a, &b,&c);
	if (a == b) {
		if (a == c) {
			price = 10000 + a * 1000;
		}
		else {
			price = 1000 + a * 100;
		}
	}
	else {
		if (a == c) {
			price = 1000 + a * 100;
		}
		else {
			int max;
			max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
			if (b == c) {
				price = 1000 + b * 100;
			}
			else {
				price = max * 100;
			}
			
		}

	}
	printf("%d", price);
}