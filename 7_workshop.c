#include<stdio.h>
float area(float r){
    float res = 3.14*r*r;
    return res;
}
float around(int r){
    float res,pi=3.14;
    res = 2*pi*r;
    return res;
}
void main(){
    printf("This is program IQ Calcualate number\n");
    int radius;
    do
    {
        printf("Pleasee enter radius(>0):");
        scanf("%d",&radius);
    } while (radius<0);
    printf("Around of circle: %.2f\n",around(radius));
    printf("Area of circle: %.2f\n",area(radius));
}