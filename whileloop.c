#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("Enter a positive interger:");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum +1;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}