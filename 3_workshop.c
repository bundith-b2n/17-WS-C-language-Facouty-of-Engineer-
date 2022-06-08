#include<stdio.h>
int multiple(int number){
    int start,end,res;
    start = number/10;
    end = number%10;
    res = start*end;
    printf("%d = %d%d",number,end,res);
}
void main(){
    printf("This is program IQ Calcualate number\n");
    int number,res;
    do
    {
        printf("Pleasee enter number(11-99):");
        scanf("%d",&number);
    } while (number<11 || number>99);
    res = multiple(number);
    res;
}