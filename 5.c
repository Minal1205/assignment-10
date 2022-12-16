#include <stdio.h>
// a function to print first N odd natural numbers. (TSRN)
void odd(int n);
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    odd(num);
    return 0;
}
void odd(int n)
{
    int i;
    for (i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
}