#include <stdio.h>

int func2(int arr[], int n) {
  int i = 0;
  int j;

  while (i < n) {
    j = i + 1;
    while (j < n) {
      if (arr[i] + arr[j] == 100)
        return (1); 
      j++;
    }
    i++;
  }
  return (0);
}

int main(void) {
  int arr[10] = {1, 52, 48};
  int arr1[10] = {50, 42};
  int arr2[10] = {4, 13, 67, 87};

  printf("%d\n", func2(arr, 3));
  printf("%d\n", func2(arr1, 2));
  printf("%d\n", func2(arr2, 4));

  return (0);
}