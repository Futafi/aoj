#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int N, M, I, x, y;
	char d;
	bool xy[21][21];
	int xnow, ynow;
	while (scanf("%d", &N) && N) {
		memset(xy, false, sizeof(xy));
		xnow = 10, ynow = 10;
		for (int i = 0; i < N; i++) {
			scanf("%d%d", &x, &y);
			xy[x][y] = true;
		}
		scanf("%d\n", &M);
		xy[xnow][ynow] = false;
		for (int i = 0; i < M; i++) {
			scanf("%c%d\n", &d, &I);
			switch (d) {
			case 'N':
				for (int i = 0; i < I; i++)
					xy[xnow][++ynow] = false;
				break;
			case 'S':
				for (int i = 0; i < I; i++)
					xy[xnow][--ynow] = false;
				break;
			case 'E':
				for (int i = 0; i < I; i++)
					xy[++xnow][ynow] = false;
				break;
			case 'W':
				for (int i = 0; i < I; i++)
					xy[--xnow][ynow] = false;
				break;
			}
		}
		for (int i = 0; i < 21; i++) for (int j = 0; j < 21; j++)
				if (xy[i][j]) {
					printf("No\n");
					goto end;
				}
		printf("Yes\n");
	end:;
	}
	return 0;
}
