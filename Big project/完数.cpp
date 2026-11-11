#include <stdio.h>

int is(int n);

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++) {
        if (is(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int is (int n)
{
    int i, sum;

    
        sum = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n%i==0) {
            sum = sum + i;
        }
    }
    if (sum==n) {
        return 1;
    }
    else {
        return 0;
    }
}