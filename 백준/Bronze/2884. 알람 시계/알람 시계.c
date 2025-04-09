#include <stdio.h>

int main(void)
{
	int hour;
	int minute;
	scanf("%d%d", &hour, &minute);
	hour += 24;
	if (minute < 45) {
		hour -= 1;
		minute += 15;
	}
	else {
		minute -= 45;
	}
	printf("%d %d", hour % 24, minute);
}