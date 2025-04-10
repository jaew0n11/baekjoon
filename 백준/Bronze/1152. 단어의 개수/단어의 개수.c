#include<stdio.h>
int main() {
	char S[1000000];
	gets(S);
	int state = 0;
	int result = 1;
	for (int i = 0;i < strlen(S);i++) {
		if (S[i] != 32)state = 1;
		if (state == 1 && S[i] == 32)result += 1;
	}if (S[strlen(S)-1] == 32)result -= 1;
	printf("%d", result);

	return 0;
}
