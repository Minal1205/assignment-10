#include <stdio.h>

/*to check whether a given number is even or odd. Return 1 if the
number is even, otherwise (TSRS)*/

int type(int n);
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    int c = type(num);
    printf("%d", c);
    return 0;
}
int type(int n)
{
    int c;
    if (n % 2 == 0)
    {
        c = 1;
    }
    else
        c = 0;
    return c;
}