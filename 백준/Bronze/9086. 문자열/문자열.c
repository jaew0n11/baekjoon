#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i = 0;i < n;i++) {
		char S[101];
		scanf("%s", S);
		printf("%c", S[0]);
		printf("%c", S[strlen(S)-1]);
		printf("\n");
	}
	
	return 0;
}