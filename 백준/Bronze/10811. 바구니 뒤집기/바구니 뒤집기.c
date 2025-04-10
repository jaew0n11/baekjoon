#include<stdio.h>
int main() {
	int n;
	int m;
	scanf("%d%d", &n, &m);
	int arr[101] = { 0 };
	for (int i = 0;i < n;i++) {
		arr[i+1] = i + 1;
	}
	
	for (int i = 0;i < m;i++) {
		int a;
		int b;
		int c = 0;
		int temp;
		scanf("%d%d", &a, &b);
		for (int j = a;j <= (a+b)/2;j++) {
			temp = arr[j];
			arr[j] = arr[b-c];
			arr[b-c] = temp;
			c++;
		}
		
	}
	for (int i = 1;i < n+1;i++) {
		printf("%d ", arr[i]);
	}
}