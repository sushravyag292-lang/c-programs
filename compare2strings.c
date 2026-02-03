//compare two stringswithout strcmp()
#include <stdio.h>

int main() {
    char s1[100],s2[100];
    int i=0;

    scanf("%s %s", s1, s2);

    while(s1[i]==s2[i] && s1[i]!='\0')
        i++;

    if(s1[i]==s2[i])
        printf("Equal");
    else if(s1[i]>s2[i])
        printf("String1 is greater");
    else
        printf("String2 is greater");

    return 0;
}

