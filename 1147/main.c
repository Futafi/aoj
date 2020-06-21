#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n;
	int sum, score;
	int max, min;
	while (true) {
		sum = 0;
		max = -1;
		min = 1e4;
		scanf("%d", &n);
		if (!n)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%d", &score);
			max = max < score ? score : max;
			min = min > score ? score : min;
			sum += score;
		}
		sum -= +max + min;
		printf("%d\n", sum / (n - 2));
	}
	return 0;
}
