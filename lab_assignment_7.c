#include <stdio.h>

void bubblesort(int array[], int a){
  int i,j;
  int tmp, swap[a];
  
  for (i = 0; i < a; i++){
    swap[i] = 0;
  }

  for (i = 0; i < a - 1; i++){
    for (j = 0; j < a - i - 1; j++){
      if (array[j] > array[j+1]){
        tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
        swap[j]++;
      }
    }
  }

  for (i = 0; i < a; i++){
    printf("Number of swaps needed for index number %d: %d\n", i, swap[i]);
  }  
}

int main(){
  int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int a = sizeof(array) / sizeof(array[0]);
  bubblesort(array, a);
  return 0;
}
