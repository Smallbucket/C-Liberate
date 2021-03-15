#include <stdio.h>

void shell_sort(int arr[], int len)
{
    int temp, i, j;
    int gap;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
    {
        //printf("out:i=%d,gap=%d,j=%d\n", i,gap,j);
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            //printf("  middle:i=%d,gap=%d,j=%d\n", i,gap,j);
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                //printf("    in:i=%d,j=%d,gap=%d\n", i,j,gap);
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}

int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    shell_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
