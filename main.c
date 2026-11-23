#include <stdio.h>

int main(void)
{
    int x = 0;
    if (scanf("%d", &x) != 1) {
        return 1;
    }
    printf("%d\n", x);
    return 0;
}
