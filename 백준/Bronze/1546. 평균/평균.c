int main() {
	int n;
	int max=0;
	int total=0;
	scanf("%d",&n);
	for (int i = 0;i < n;i++) {
		int a;
		scanf("%d",& a);
		total += a;
		if (a > max) {
			max = a;
		}
	}
	printf("%lf", (double)total / (double)max / (double)n * 100);
	
	
}