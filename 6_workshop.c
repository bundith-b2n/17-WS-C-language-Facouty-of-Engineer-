#include<stdio.h>
void multiple(int number1,int number2, int number3){
    int res = number1*number2;
    printf("%d",res);
}
void multiple2(int number1,int number2,int number3){
    int res = number1*number3;
    printf("%d",res);
}
void SumAndMinus(int number1,int number2,int number3){
    int res = ((number1*number2)+(number1*number3))-number2;
    printf("%d",res);
}
void main(){
    printf("This is program IQ Calcualate number\n");
    int number1,number2,number3,res;
    do
    {
        printf("Pleasee enter number(>0):");
        scanf("%d",&number1);
        printf("Pleasee enter number(>0):");
        scanf("%d",&number2);
        printf("Pleasee enter number(>0):");
        scanf("%d",&number3);
    } while (number1<0 || number2<0 || number3<0);
    printf("%d+%d+%d = ",number1,number2,number3);
    multiple(number1,number2,number3);
    multiple2(number1,number2,number3);
    SumAndMinus(number1,number2,number3);
}