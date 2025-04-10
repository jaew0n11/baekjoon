#include<stdio.h>
#include<math.h>
int main() {
	char a[4];
	char b[4];
	double ra=0.0;
	double rb=0.0;
	scanf("%s%s", a, b);
	for (int i = 0; i < 3;i++) {
		ra += ((int)a[i]-48) * pow(10.0,(double)i);
		rb += ((int)b[i]-48) * pow(10.0,(double)i);
	}
	
	printf("%.0lf", (ra > rb) ? ra : rb);
	return 0;
}
