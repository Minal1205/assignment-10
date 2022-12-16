#include <stdio.h>
/* a function to calculate the number of arrangements one can make from n items
and r selected at a time.(TSRS)  */
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;

    return f;
}
int perm(int n, int r)
{
    int p = fact(n) / fact(n - r);
    return p;
}
int main()
{
    int x, y;
    printf("Enter N and R\n");
    scanf("%d %d", &x, &y);
    int k = perm(x, y);
    printf("Number of arrangements =%d", k);

    return 0;
}