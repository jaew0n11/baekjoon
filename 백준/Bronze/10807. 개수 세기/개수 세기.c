#include<stdio.h>
int main() {
	int n;
	int val;
	int result = 0;
	scanf("%d",&n);
	int arr[100];
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &val);
	for (int i = 0; i < n;i++) {
		if (arr[i] == val) {
			result += 1;
		}
	}
	printf("%d", result);
}