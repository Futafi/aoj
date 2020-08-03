#include <stdio.h>
int main()
{
	int n;
	int date;
	int Y, M, D;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		date = 0;
		scanf("%d%d%d", &Y, &M, &D);
		date += (1000 - (Y + 1)) * (5 * 20 + 5 * 19);
		date += ((1000 - Y + 1) / 3) * 5;

		if (Y % 3) {
			date += (5 * 20 + 5 * 19) - ((M - 1) * 20 + D);
			date += (M + 1) / 2;
		} else {
			date += (10 * 20) - ((M - 1) * 20 + D);
			date += 1;
		}
		printf("%d\n", date);
	}
	return 0;
}
