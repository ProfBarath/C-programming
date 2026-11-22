#include <stdio.h>

int main() {

    int n, first, last, sum;

    scanf("%d", &n);

    // Convert negative number to positive
    if (n < 0) {
        n = -n;
    }

    last = n % 10;
    first = n / 1000;

    sum = first + last;

    printf("%d\n", sum);

    return 0;
}