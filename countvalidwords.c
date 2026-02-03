//Count valid words (only alphabets
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i,count=0,valid=1;

    fgets(str,200,stdin);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==' '||str[i]=='\n') {
            if(valid) count++;
            valid=1;
        }
        else if(!isalpha(str[i]))
            valid=0;
    }

    printf("Valid words: %d",count);
}
