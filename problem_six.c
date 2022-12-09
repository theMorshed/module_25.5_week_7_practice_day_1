#include <stdio.h>

int main() {
    int number_one, number_two, number_three, sum = 0;
    int *ptr_one, *ptr_two, *ptr_three;
    
    scanf("%d %d %d", &number_one, &number_two, &number_three);
    ptr_one = &number_one;
    ptr_two = &number_two;
    ptr_three = &number_three;
    
    sum = *ptr_one + *ptr_two + *ptr_three;
    
    printf("%d\n", sum);
    
    return 0;
}