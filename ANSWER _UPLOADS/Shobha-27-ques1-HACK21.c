#include <stdio.h>

int main(void) {
        // your code goes here
        int T;
        scanf("%d", & T);
        while (T--) {
                int x, y, c = 0, d = 0, e;
                scanf("%d %d", & x, & y);
                while (x != y) {
                        if (x < y) {
                                x = x + 2;
                                c++;
                        } else {
                                x = x - 1;
                                d++;
                        }

                }
                e = c + d;
                printf("%d\n", e);

        }
        return 0;
}
