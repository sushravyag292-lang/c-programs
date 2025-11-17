#include<stdio.h>
int main(){
    float n1,n2,result;
    char op;
    printf("Enter an expression(eg: 5+3):");
    scanf("%f %c %f",&n1,&op,&n2);
    switch(op){
        case '+':
        result = n1+n2;
        printf("Result = %f \n",result);
        break ;

        case '-':
        result = n1-n2;
        printf("Result = %f \n",result);
        break ;

        case '*':
        result = n1*n2;
        printf("Result = %f \n",result);
        break ;
    
        case '/':
        if(n2 !=0)
        result = n1/n2;
        else{
            printf("Error! division by zero \n");
            return 0;
        }
        printf("Result = %f \n",result);
        break ;

        default:
        printf("Invalid operator! \n");

    }
    return 0;
}