#include <stdio.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void sort(int arr[], int start, int end)
{
  if(start >= end)
    return;

  int mid = arr[end];
  int left = start, right = end - 1;
  while(left < right)
  {
    while(arr[left] < mid && left < right)
      left++;
    while(arr[right] >= mid && left < right)
      right--;
    swap(&arr[left], &arr[right]);
  }

  if(arr[left] >= arr[end])
    swap(&arr[left], &arr[end]);
  else
    left++;

  if(left)
    sort(arr, start, left - 1);
  sort(arr, left + 1, end);
}

void quick_sort(int arr[], int len)
{
  sort(arr, 0, len - 1);
}

int main()
{
  int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
  int len = (int) sizeof(arr) / sizeof(*arr);
  quick_sort(arr, len);
  int i;
  for (i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
