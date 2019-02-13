#include <stdio.h>
int main(void) {
    int count = 0;
    int i, j;
    int repeats = 0;
    char word[50];
    char swap;

    scanf("%s", word);

    while(word[count] != '\0'){
      count++;
    }

    for(j = 0; j < count-1; j++){
      for(i = 0; i < count-1; i++){
        if(word[i] > word[i+1]){
          swap = word[i];
          word[i] = word[i+1];
          word[i+1] = swap;
        }
      }
    }

    i = 0;

    while(i<count-1){
      if(word[i] == word[i+1]){
        repeats++;
        j=i+2;
        while(j<count && word[i] == word[j])
          j++;
          i = j;
        
      }
        else{
          i++;
        }
      }
    printf("%d \n", repeats);

    return 0;
}
