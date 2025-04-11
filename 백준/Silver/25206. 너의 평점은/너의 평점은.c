#include<stdio.h>
#include<string.h>
int main() {
	double total = 0;
	double sum_unit = 0;
	for (int i = 0;i < 20;i++) {
		char subjact[50];
		double unit;
		char point[3];
		scanf("%s%lf%s", subjact, &unit, point);
		sum_unit += unit;
		if (strcmp(point ,"A+")==0)total += unit * 4.5;
		else if (strcmp(point, "A0")==0)total += unit * 4.0;
		else if (strcmp(point, "B+")==0)total += unit * 3.5;
		else if (strcmp(point, "B0")==0)total += unit * 3.0;
		else if (strcmp(point, "C+")==0)total += unit * 2.5;
		else if (strcmp(point, "C0")==0)total += unit * 2.0;
		else if (strcmp(point, "D+")==0)total += unit * 1.5;
		else if (strcmp(point, "D0")==0)total += unit * 1.0;
		else if (strcmp(point, "F")==0)total += unit * 0.0;
		else sum_unit -= unit;
	}
	printf("%lf", total / sum_unit);
	return 0;
	
}