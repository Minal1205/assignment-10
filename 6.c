#include<stdio.h>
int factorial(int n);
int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    int c=factorial(num);
    printf("Factorial of %d is %d",num,c);

    
    return 0;
}
int factorial(int n){
    int fac=1;
    
    for(int i=1;i<=n;i++)
        fac=fac*i;

    
    return fac;
}