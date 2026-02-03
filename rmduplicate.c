//Remove duplicate characters (HackerRank
#include <stdio.h>

int main() {
    char str[100];
    int seen[256]={0},i;

    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
        if(!seen[str[i]]) {
            printf("%c",str[i]);
            seen[str[i]]=1;
        }
}
