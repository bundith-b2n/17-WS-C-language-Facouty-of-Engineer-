#include<stdio.h>
void sum(int number1,int number2){
    int res = number1+number2;
    printf("%d",res);

}
void minus(int number1, int number2){
    int res = number1-number2;
    printf("%d",res);
}
void time(int number1,int number2){
    int res = number1*number2;
    printf("%d",res);
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
    
    printf("%d+%d = ",number1,number2);
    time(number1,number2);
    sum(number1,number2);
    minus(number1,number2);
}