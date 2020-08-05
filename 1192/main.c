#include <math.h>
#include <stdio.h>

int main()
{
	int x, y, s;
	int ans, tmp, t1, t2;
	double xx, yy;
	while (scanf("%d%d%d", &x, &y, &s) && x) {
		ans = tmp = t1 = t2 = 0;
		xx = 1 + x / 100.0;
		yy = 1 + y / 100.0;
		for (int t1 = 1; t1 < s; t1++) {
			for (int t2 = 1; t2 < s; t2++) {
				tmp = (int)(t1 * xx + 0.00001) + (int)(t2 * xx + 0.00001);
				if (tmp == s) {
					tmp = (int)(t1 * yy + 0.00001) + (int)(t2 * yy + 0.00001);
					if (tmp > ans)
						ans = tmp;
				} else if (tmp > s)
					break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
