#include<stdio.h>
int plus(int number1,int number2){
    int res = number1+number2;
    return res;
}
int minus(int number1,int number2){
    int res = number1-number2;
    return res;
}
int multiple(int number1,int number2){
    int res = number1*number2;
    return res;
}
int divide(int number1,int number2){
    int res = number1/number2;
    return res;
}
int mode(int number1,int number2){
    int res = number1%number2;
    return res;
}
int main(){
    int number1,number2;
    do
    {
        printf("Pleasee enter number(>0):");
        scanf("%d",&number1);
        printf("Pleasee enter number(>0):");
        scanf("%d",&number2);
    } while (number1<0 || number2<0);
    printf("%d+%d = %d\n",number1,number2,plus(number1,number2));
    printf("%d-%d = %d\n",number1,number2,minus(number1,number2));
    printf("%d*%d = %d\n",number1,number2,multiple(number1,number2));
    printf("%d/%d = %d\n",number1,number2,divide(number1,number2));
    printf("%d%%%d = %d\n",number1,number2,mode(number1,number2));
}