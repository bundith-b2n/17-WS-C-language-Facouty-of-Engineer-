#include<stdio.h>
int sum(int number1,int number2){
    int res = number1+number2;
    return res;

}
int minus(int number1, int number2){
    int res = number1-number2;
    return res;
}
int time(int number1,int number2){
    int res = number1*number2;
    return res;
}
void main(){
    printf("This is program IQ Calcualate number\n");
    int number1,number2;
    do
    {
        printf("Pleasee enter number1>0:");
        scanf("%d",&number1);
        printf("Pleasee enter number2>0:");
        scanf("%d",&number2);
    } while (number1<0 || number2<0);
    
    int res = time(number1,number2);
    int plus= sum(number1,number2);
    int mi = minus(number1,number2);
    printf("%d+%d = %d%d%d",number1,number2,res,plus,mi);
}