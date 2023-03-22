#include <stdio.h>
int main(void)
{
	int H, M, C, a=0, b=0;
	scanf("%d %d",&H,&M);
	scanf("%d", &C);
	if (C + M <=59)
		printf("%d %d", H, C + M);
	else if (C + M > 59) {
		a = (C + M) / 60;
		b = (C + M) % 60;

		if (H + a <= 23)
			printf("%d %d", H + a, b);
		else
			printf("%d %d", H + a - 24, b);
	}
	return 0;
}