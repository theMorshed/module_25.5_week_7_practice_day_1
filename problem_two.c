#include <stdio.h>

void bubble_sort(int arr[], int length);
int find_kth_largest(int arr[], int length, int k);
int find_kth_smallest(int arr[], int k);

int main()
{
    int length, i, k, kth_largest, kth_smallest;
    scanf("%d", &length);
    int numbers[length];

    for (i = 0; i < length; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &k);

    bubble_sort(numbers, length);  

    kth_largest = find_kth_largest(numbers, length, k);
    kth_smallest = find_kth_smallest(numbers, k);  

    printf("%dth largest element = %d\n", k, kth_largest);
    printf("%dth smallest element = %d\n", k, kth_smallest);

    return 0;
}

int find_kth_smallest(int arr[], int k)
{
    return arr[k - 1];
}

int find_kth_largest(int arr[], int length, int k)
{
    return arr[length - k];
}

void bubble_sort(int arr[], int length)
{
    int i, j, temp;    
    for (i = 0; i < length; i++) {
        for (j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}