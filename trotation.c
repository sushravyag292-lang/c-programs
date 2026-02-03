//Check if T is rotation of S
#include <stdio.h>
#include <string.h>

int main() {
    char s[100],t[100],temp[200];

    scanf("%s %s",s,t);

    strcpy(temp,s);
    strcat(temp,s);

    if(strstr(temp,t))
        printf("Rotation");
    else
        printf("Not Rotation");
}
