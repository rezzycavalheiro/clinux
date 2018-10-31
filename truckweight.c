#include <stdio.h>
int main(void){
    int cars, i;
    scanf("%d", &cars);
    double weight, totalw = 0, eachw = 0, finalw = 0;
    double boxcars[50];
    for(i=0;i<cars;i++){
        scanf("%lf", &weight);
        totalw = totalw + weight;
        boxcars[i] = weight;
    }
    eachw = totalw/cars;
    for(i=0;i<cars;i++) {
        if(boxcars[i] > eachw){
            finalw = eachw - boxcars[i];
            printf("%.1lf\n", finalw);
        }
        else if(boxcars[i] < eachw){
            finalw = eachw - boxcars[i];
            printf("%.1lf\n", finalw);
        }
        else {
            printf("%.1lf", eachw);
        }
    }
    return 0;
}
