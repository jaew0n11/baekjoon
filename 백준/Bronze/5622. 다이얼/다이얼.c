#include<stdio.h>
int main() {
	char a[16];
	int result = 0;
	scanf("%s", a);
	for (int i = 0;i < strlen(a);i++) {
		if (a[i] < 68) result += 3;
		else if (a[i] < 71) result += 4;
		else if (a[i] < 74) result += 5;
		else if (a[i] < 77) result += 6;
		else if (a[i] < 80) result += 7;
		else if (a[i] < 84) result += 8;
		else if (a[i] < 87) result += 9;
		else  result += 10;
	}
	printf("%d", result);

	return 0;
}
