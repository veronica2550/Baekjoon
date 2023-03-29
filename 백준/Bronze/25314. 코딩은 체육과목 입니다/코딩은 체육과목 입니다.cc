#include <stdio.h>
int main(void)
{
	int n,a;
	scanf("%d",&n);
	a = n / 4;
	for (int i = 0; i < a; i++) {
		printf("long ");
	}
	printf("int");
}