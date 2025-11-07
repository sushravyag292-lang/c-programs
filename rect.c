#include<stdio.h>
int main(){
    float l, b, area, peri;
    printf("Enter length and breath:");
    scanf("%f %f",&l,&b);
    area = l*b;
    printf("Area is %.2f ",area);
    peri = 2*(l+b);
    printf("perimeter is %.2f",peri);
    return 0;
}