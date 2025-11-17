#include<stdio.h>
int main(){
    float m1,m2,m3,total,avg;
    char grade;
    printf("Enter makrs for 3 subjects out of 100:");
    scanf("%f %f %f",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg = total /3;
    printf("\n Total marks is %f",total);
    printf("\n Average is %f", avg);
    if (avg >= 90)
    grade = 'A';
    else if (avg>= 80)
    grade ='B';
    else if (avg>= 70)
    grade ='c';
    else if (avg>= 60)
    grade ='D';
    else if (avg>= 50)
    grade ='E';
    else 
    grade ='F';
    printf("\n Grade = %c",grade);
    return 0;

}