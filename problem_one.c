#include <stdio.h>

int find_largest_smallest(int arr[], int length, int num);

int main()
{
    int number, i, count, k;
    scanf("%d", &number);
    int numbers[number];

    for (i = 0; i < number; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &k);

    count = find_largest_smallest(numbers, number, k);
    printf("%d\n", count);

    return 0;
}

int find_largest_smallest(int arr[], int length, int num)
{
    int i, count = 0;

    for (i = 0; i < length; i++) {
        if (arr[i] != num) {
            count++;
        }
    }

    return count;
}