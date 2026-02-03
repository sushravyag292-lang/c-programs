//Largest and smallest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[20];
    char small[20], large[20];
    int i,j=0;

    fgets(str,200,stdin);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]!=' ' && str[i]!='\n')
            word[j++]=str[i];
        else {
            word[j]='\0';
            if(strlen(small)==0 || strlen(word)<strlen(small))
                strcpy(small,word);
            if(strlen(word)>strlen(large))
                strcpy(large,word);
            j=0;
        }
    }

    printf("Smallest: %s\nLargest: %s",small,large);
}
