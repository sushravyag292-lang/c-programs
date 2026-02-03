//Check Anagrams
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int a[256]={0},i;

    scanf("%s %s", s1, s2);

    if(strlen(s1)!=strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;s1[i]!='\0';i++) {
        a[s1[i]]++;
        a[s2[i]]--;
    }

    for(i=0;i<256;i++)
        if(a[i]!=0) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
}
