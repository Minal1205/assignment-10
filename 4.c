#include<stdio.h>
//function to print first N natural numbers (TSRN)
void natural(int n);
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    natural(num);
    
    return 0;
}
void natural(int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
}