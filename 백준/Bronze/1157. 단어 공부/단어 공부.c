#include<stdio.h>
int main() {
	char n[1000001];
	int count[26] = { 0 };
	int result = 0;
	int max_char;
	int is_dup = 0;
	int len=0;
	scanf("%s", n);
	len = strlen(n);
	for (int i = 0;i < len;i++) {
		if ((int)n[i] <= 90) {
			count[(int)n[i] - 65] += 1; // 대문자인경우
		}
		else count[(int)n[i] - 97] += 1;//소문자인 경우
	}
	for (int i = 0;i < 26;i++) {
		if (count[i] > result) {	
			result = count[i];
			max_char = i;
		}
	}
	for (int i = max_char + 1; i < 26; i++) {
		if (count[i] == result) {
			is_dup = 1;
			break;
		}
	}
	if (is_dup == 0) {
		printf("%c", max_char + 65);
	}
	else printf("?");
}