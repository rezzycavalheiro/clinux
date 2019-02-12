#include <stdio.h>

int main(){
    char word[50];
    int count = 0, i = 0, found = 0, half = 0;
    char item1 = 't', item2 = 'T';
    scanf("%s", word);

    while(word[i] != '\0'){
      i++;
      count++;
    }

    half = count/2 + 1;
    i = 0;
    while(!found && i<half)
    {
      if(word[i] == item1 || word[i] == item2){
        found = 1;
        printf("1");
      }
      else{
      i++;
      }
    }
    while(!found && half<count)
    {
        if(word[half] == item1 || word[half] == item2){
            found = 1;
            printf("2");
        }
        else{
            half++;
        }
    }
    if(found == 0){
        printf("-1");
    }
  }
