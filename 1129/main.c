#include <stdbool.h>
#include <stdio.h>
int main()
{
	int n, r, p, c, tmp;
	int *b;
	int bef[50], aft[50];

	while (true) {
		scanf("%d %d", &n, &r);
		if (!(n | r))
			break;
		b = bef;
		for (int i = n; i >= 1; i--)
			*b++ = i;
		for (int i = 0; i < r; i++) {
			scanf("%d %d", &p, &c);
			for (int j = 0; j < p - 1; j++)
				aft[c + j] = bef[j];
			for (int j = 0; j < c; j++)
				aft[j] = bef[p + j - 1];
			for (int j = c + p - 1; j < n; j++)
				aft[j] = bef[j];
			for (int j = 0; j < n; j++)
				bef[j] = aft[j];
		}
		printf("%d\n", bef[0]);
	}
	return 0;
}
