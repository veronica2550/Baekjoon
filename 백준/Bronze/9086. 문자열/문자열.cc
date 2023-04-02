#include <stdio.h>
#include <string.h>
int main(void)
{
	int t, a;
	char s[1000];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", s);
		a = strlen(s);
		printf("%c%c\n", s[0], s[a-1]);
	}
	return 0;
}