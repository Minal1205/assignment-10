#include <stdio.h>
/* a function to calculate the number of combinations one can make from n items
and r selected at a time.(TSRS)  */
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;

    return f;
}
int comb(int n, int r)
{
    int p = fact(n) / (fact(r) * fact(n - r));
    return p;
}
int main()
{
    int x, y;
    printf("Enter N and R\n");
    scanf("%d %d", &x, &y);
    int k = comb(x, y);
    printf("Number of combinations =%d", k);

    return 0;
}