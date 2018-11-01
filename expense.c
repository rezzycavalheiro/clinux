#include <stdio.h>
int main(void) {
    int expense=0, total=0;
    while (expense != -1) {
        scanf("%d", &expense);
        if(expense != -1){
        total = total + expense;
        }
    }
    printf("%d", total);
    return 0;
}
