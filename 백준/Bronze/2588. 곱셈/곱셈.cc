#include <stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%1d %1d %1d", &b, &c, &d);
	printf("%d\n", a * d);
	printf("%d\n", a * c);
	printf("%d\n", a * b);
	printf("%d\n", a*d+a*c*10+a*b*100);


	return 0;
}
