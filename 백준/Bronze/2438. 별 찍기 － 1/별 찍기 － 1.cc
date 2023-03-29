#include <stdio.h>
int main(void)
{
	int c;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		for (int j = 1; j <= i+1; j++)
			printf("*");
		printf("\n");
	}
}