
#include <stdio.h>
int main()
{
    int i, n, a = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", a);
        nextTerm = a + t2;
        a = t2;
        t2 = nextTerm;
    }
    return 0;
}
