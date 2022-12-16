#include <stdio.h>
// function to print all prime factors of a given number.(TSRN)
void primefactor(int n)
{
    for (int i = 2; i <= n; i++)
    {

        while (n % i == 0)
        {
            printf("%d\n", i);
            n = n / i;
        }
    }
}
int main()
{
    int num;
    printf("enter Number\n");
    scanf("%d", &num);
    primefactor(num);
    return 0;
}