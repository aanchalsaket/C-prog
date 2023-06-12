#include<stdio.h>
int main(){
    int principle=100,rate=4,years=1;
    int simpleInterest = (principle*rate*years)/100;
    printf("Simple Interest = %d", simpleInterest);
    return 0;
}