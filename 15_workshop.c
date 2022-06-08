#include<stdio.h>
int plus(int a,int b){
    int result;
    result = a+b;
    return result;
}
int minus(int a,int b){
    int result;
    result = a-b;
    return result;
}
int multiply(int a,int b){
    int result;
    result = a*b;
    return result;
}
int divide(int a,int b){
    int result;
    result = a/b;
    return result;
}
int mode(int a,int b){
    int result;
    result = a%b;
    return result;
}
int main(){
    int a,b;
    char op;
    printf("Please enter two numbers:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op){
        case '+':
            printf("%d + %d = %d\n",a,b,plus(a,b));
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,minus(a,b));
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,multiply(a,b));
            break;
        case '/':
            printf("%d / %d = %d\n",a,b,divide(a,b));
            break;
        case '%':
            printf("%d %% %d = %d\n",a,b,mode(a,b));
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
}