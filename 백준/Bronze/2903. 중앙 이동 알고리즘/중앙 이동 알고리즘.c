#include<stdio.h>
#include<math.h>

int main() {
	
	int n;
	scanf("%d", &n);
	double b = pow(2, (double)n);
	printf("%.0lf", pow(b+1,2));
	
	return 0;
	
}
