 #include <stdio.h>
 
 int main(void){
     int stars, i, j;
     scanf("%d", &stars);
     for(i=0; i<stars;i++){
         for(j=0;j<stars;j++){
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }
