#include <stdbool.h>
#include <stdio.h>

int main()
{
	int n, m;
	int ns[100], ms[100];
	int ansn, ansm;
	int sumn, summ;
	while (true) {
		sumn = 0, summ = 0, ansn = 10000, ansm = 10000;
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0)
			break;

		for (int i = 0; i < n; i++) {
			scanf("%d", &ns[i]);
			sumn += ns[i];
		}
		for (int i = 0; i < m; i++) {
			scanf("%d", &ms[i]);
			summ += ms[i];
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if ((ns[i] - ms[j]) * 2 == sumn - summ && ns[i] + ms[j] < ansn + ansm)
					ansn = ns[i], ansm = ms[j];
		if (ansn + ansm < 10000)
			printf("%d %d\n", ansn, ansm);
		else
			printf("-1\n");
	}
	return 0;
}
