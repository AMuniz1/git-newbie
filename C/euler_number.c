#include <stdio.h>
#include <stdlib.h>

int
main()
{
        int i, n;
        long double en = 1.0;   // Euler's number
        long double f = 1.0;    // factorial number

        printf("Enter the value of n to approximate Euler's number: ");
        scanf("%d", &n);

        if (n < 1) {
                printf("Error\n");
                exit(1);
        }

        for (i = 1; i <= n; i++) {
                f *= i;
                en += 1 / f;
        }
        printf("n = %d and en = %.9Lf\n", n, en);

        return 0;
}
