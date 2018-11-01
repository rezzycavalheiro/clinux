#include <stdio.h>

int main(void){
    int min, max, temp = 0;
    scanf("%d %d", &min, &max);
    while(temp != -999){
        scanf("%d", &temp);
        if(temp <= max && temp >= min && temp){
            printf("Nothing to report\n");
        }
        else if((temp > max || temp < min) && temp != -999){
            printf("Alert!\n");
            break;
        }
    }
    return 0;
}
