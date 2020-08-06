#include <stdio.h>
int main()
{
	int N, M, P;
	int X[100], sum;
	while (scanf("%d%d%d", &N, &M, &P) && N) {
		sum = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d", &X[i]);
			sum += X[i];
		}
		sum *= (100 - P);
		printf("%d\n", X[M - 1] ? sum / X[M - 1] : 0);
	}
	return 0;
}
