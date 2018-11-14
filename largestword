#include <stdio.h>
int main(void) {
 
    int amount, i = 0, l = 0, count = 0, max;
    scanf("%d", &amount);
    int set[100];
    char word[20];
    int length[100];
    for(i=0;i<100;i++){
        length[i] = 0;
    }
    for(i=0;i<amount;i++){
        scanf("%s", word);
        l = 0;
        while(word[l] != '\0'){
            l++;
        }
        length[l] += 1;
        count++;
        set[i] = l;
    }
    
    for(i=0;i<count;i++){
        }

    max = set[0];
    for(i=1;i<count;i++){
        if(set[i] > max){
            max = set[i];
        }
    }

    printf("%d", max);
    return 0;
}
