#include<stdio.h>
int main(){
    const int maxScore = 100;
    volatile int sensorValue = 70;
    printf("Constant value: %d\n",maxScore);
    printf("Volatile value: %d",sensorValue);
    return 0;
}