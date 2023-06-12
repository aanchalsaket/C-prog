#include<stdio.h>
int main(){
    int radius,height;
    float pi = 3.14;
    
    printf("Enter the radius of the circle:\n");
    scanf("%d",&radius);
    printf("Enter the height of the circle:\n");
    scanf("%d",&height);
    printf("Area of circle = %f",pi*radius*radius*height);

    return 0;
}