#include <stdio.h>

int main()
{
	int N;
	int ans, sum, start, end;
	while (scanf("%d", &N) && N) {
		ans = 0, start = 1, end = 2, sum = 3;
		do {
			if (sum == N) ans += 1, sum -= start++;
			else if (sum < N) sum += ++end;
			else sum -= start++;
		} while (start != end);
		printf("%d\n", ans);
	}

	return 0;
}
