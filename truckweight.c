#include <stdio.h>
int main(void){
    int cars, i;
    scanf("%d", &cars);
    double weight, totalw = 0, eachw = 0;
    for(i=0;i<cars;i++){
        scanf("%lf", &weight);
        totalw = totalw + weight;
    }
    eachw = totalw/cars;
    while(weight > eachw){
        weight = weight - 1;
    }
    while(weight < eachw){
        eachw = 
    }
