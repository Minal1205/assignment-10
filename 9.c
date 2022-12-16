#include <stdio.h>
// function to check whether a given number contains a given digit or not (TSRS)
int check(int n, int d)
{
    int c;
    while (n != 0)
    {

        if (n % 10 == d)
            c = 1;
        n = n / 10;
    }

    return c;
}

int main()
{
    int num, digit;
    printf("Enter Number And Digit \n");
    scanf("%d %d", &num, &digit);
    int k = check(num, digit);
    if (k == 1)
        printf("Number contains the digit\n");
    else
        printf("Number does not contain the given digit");
    return 0;
}
