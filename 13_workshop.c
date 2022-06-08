#include<stdio.h>
float discount(float price){
    float result;
    if(price>=50000&&price<=100000){
        result = price*0.02;
    }
    else if(price>=100001&&price<=200000){
        result = price*0.03;
    }
    else if(price>=200001&&price<=500000){
        result = price*0.05;
    }
    else if(price>500000){
        result = price*0.07;
    }
    else{
        result = 0;
    }
    return result;
}
void main(){
    float price;
    printf("Please enter price:");
    scanf("%f",&price);
    printf("Total price:%.2f\n",price);
    printf("Discount price:%.2f\n",discount(price));
    printf("Total pay:%.2f\n",price-discount(price));
    printf("Thank you for shopping!\n");
}