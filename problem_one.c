#include <stdio.h>

int main()
{
    int number, i, count = 0, k;
    scanf("%d", &number);
    int numbers[number];

    for (i = 0; i < number; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < number; i++) {
        if (numbers[i] != k) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}