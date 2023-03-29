#include <stdio.h>
int main(void)
{
	int c, a;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c; j++)
			if (i + j < c - 1)
				printf(" ");
			else
				printf("*");

		printf("\n");
	}
}