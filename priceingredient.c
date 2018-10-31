#include <stdio.h>

int main(void) {
    int amount, i;
    scanf("%d", &amount);
    while(amount > 10){
        scanf("%d", &amount);
    }
    double weight[10], cost[10], total = 0;
    for (i=0; i<amount; i++){
        scanf("%lf", &cost[i]);
    }
    for(i=0;i<amount;i++){
        scanf("%lf", &weight[i]);
    }
    for(i=0;i<amount;i++){
        total = total + cost[i]*weight[i];
    }
    printf("%lf", total);
    return 0;
}
