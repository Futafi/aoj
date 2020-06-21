#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int n, p, now, initp;
	int pebbles[50];
	while (true) {
		scanf("%d %d", &n, &p);
		now = 0;
		initp = p;
		memset(pebbles, 0, sizeof(pebbles));
		if (!(n || p))
			break;
		while (true) {
			if (p) {
				pebbles[now] += 1;
				if (!--p && pebbles[now] == initp) {
					printf("%d\n", now);
					break;
				}
			} else {
				p += pebbles[now];
				pebbles[now] = 0;
			}
			if (++now == n)
				now = 0;
		}
	}
}
