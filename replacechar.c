//replace charecter
#include <stdio.h>

int main() {
    char str[100],a,b;
    int i;

    scanf("%s %c %c",str,&a,&b);

    for(i=0;str[i]!='\0';i++)
        if(str[i]==a)
            str[i]=b;

    printf("%s",str);
}
