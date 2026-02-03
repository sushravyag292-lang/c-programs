//Longest Palindromic Substring
// Complex problem - basic version
#include <stdio.h>
#include <string.h>

int isPal(char s[], int i, int j) {
    while(i<j)
        if(s[i++]!=s[j--])
            return 0;
    return 1;
}

int main() {
    char s[100];
    int i,j,len,max=1,start=0,n;

    scanf("%s",s);
    n=strlen(s);

    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if(isPal(s,i,j) && j-i+1>max) {
                max=j-i+1;
                start=i;
            }

    for(i=start;i<start+max;i++)
        printf("%c",s[i]);
}
