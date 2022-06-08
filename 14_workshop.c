#include<stdio.h>
void plus(int a,int b){
    int result;
    result = a+b;
    printf("%d + %d = %d\n",a,b,result);
}
void minus(int a,int b){
    int result;
    result = a-b;
    printf("%d - %d = %d\n",a,b,result);
}
void multiply(int a,int b){
    int result;
    result = a*b;
    printf("%d * %d = %d\n",a,b,result);
}
void divide(int a,int b){
    int result;
    result = a/b;
    printf("%d / %d = %d\n",a,b,result);
}
void mode(int a,int b){
    int result;
    result = a%b;
    printf("%d %% %d = %d\n",a,b,result);
}
int main(){
    int a,b;
    char op;
    printf("Please enter two numbers:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op){
        case '+':
            plus(a,b);
            break;
        case '-':
            minus(a,b);
            break;
        case '*':
            multiply(a,b);
            break;
        case '/':
            divide(a,b);
            break;
        case '%':
            mode(a,b);
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
}