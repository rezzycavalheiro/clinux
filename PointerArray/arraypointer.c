#include <stdio.h>

void reverseArray(int *);

int main() {
    int arr[6];
    int i;
    for(i=0;i<6;i++){
      scanf("%d", &arr[i]);
    }
    reverseArray(arr);
    for(i=0;i<6;i++){
      printf("%d ", arr[i]);
    }
    return 0;
  }

void reverseArray(int *arr){
  int aux;
  aux = arr[0];
	arr[0] = arr[5];
	arr[5] = aux;

	aux = arr[1];
	arr[1] = arr[4];
	arr[4] = aux;

	aux = arr[2];
	arr[2] = arr[3];
	arr[3] = aux;
}
