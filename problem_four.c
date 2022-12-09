#include <stdio.h>

void print_to_one(int num);

int main()
{
    int num;
    scanf("%d", &num);
    
    print_to_one(num);
    printf("\n");
    
    return 0;
}

void print_to_one(int num)
{
    printf("%d ", num);
    if (num == 1) 
        return;
    return print_to_one(num - 1);
}