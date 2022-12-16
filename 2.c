#include <stdio.h>
//a function to calculate simple interest. (TSRS)
float SI(int p, int r, int t);
int main()
{
    int prin, rate, time;
    printf("Enter Principal\n");
    scanf("%d", &prin);
    printf("Enter Rate\n");
    scanf("%d", &rate);
    printf("Enter Time\n");
    scanf("%d", &time);
    float simple_interest = SI(prin, rate, time);
    printf("Simple Interest=%f", simple_interest);

    return 0;
}
float SI(int p, int r, int t)
{
    float interest = (p * r * t) / 100;
    return interest;
}
