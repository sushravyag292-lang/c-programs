#include<stdio.h>
struct Student{
    int id;
    char name[20];
};
int main(){
    struct Student s[2]={{101,"Kenny"},{102,"kylie"}};
    for(int i=0;i<2;i++)
    printf("TD: %d,Name: %s\n",s[i].id,s[i].name);
    return 0;
}