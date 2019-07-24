#include <stdio.h>

int main(int argc, char const* argv[]) {
    int b, s, j, k;
    while (1) {
        s = j = k = 1;
        scanf("%d", &b);
        if (!b) break;
        while (1) {
            if (s < b) {
                k++;
                s += k;
            } else if (s > b) {
                s -= j;
                j++;
            } else {
                printf("%d %d\n", j, k - j + 1);
                break;
            }
        }
    }
    return 0;
}
