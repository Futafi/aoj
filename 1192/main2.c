#include <math.h>
#include <stdio.h>

int main()
{
	int x, y, s;
	int ans, tmp, t1, t2;
	while (scanf("%d%d%d", &x, &y, &s) && x) {
		ans = tmp = t1 = t2 = 0;
		for (int t1 = 1; t1 < s; t1++) {
			for (int t2 = 1; t2 < s; t2++) {
				tmp = t1 * (100 + x) / 100 + t2 * (100 + x) / 100;
				if (tmp == s) {
					tmp = t1 * (100 + y) / 100 + t2 * (100 + y) / 100;
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
