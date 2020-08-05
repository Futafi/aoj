#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int tmp, count;
	char m[2000];
	char chars[9][5] = {
	    {'.', ',', '!', '?', ' '},
	    {'a', 'b', 'c'},
	    {'d', 'e', 'f'},
	    {'g', 'h', 'i'},
	    {'j', 'k', 'l'},
	    {'m', 'n', 'o'},
	    {'p', 'q', 'r', 's'},
	    {'t', 'u', 'v'},
	    {'w', 'x', 'y', 'z'}};
	int sizes[] = {5, 3, 3, 3, 3, 3, 4, 3, 4};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", m);
		for (char *ptr = m; *ptr != '\0'; ptr++) {
			count = 0;
			tmp = (*ptr - '0');
			if (!tmp)
				continue;
			while (*++ptr != '0')
				count++;
			printf("%c", chars[tmp - 1][count % sizes[tmp - 1]]);
		}
		printf("\n");
	}
	return 0;
}
