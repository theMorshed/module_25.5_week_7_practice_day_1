#include <stdio.h>
#include <string.h>
#include <math.h>

void is_power_of_two(char *str, int len);

int main() 
{
    char str[100];
    int len;
    
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    is_power_of_two(str, len);

    return 0;
}

void is_power_of_two(char *str, int len) 
{
    int cost = 0, i;
    for (i = 0; i < len - 1; i++) {
        cost += (str[i] - 96);
    }
    
    if (ceil(log2(cost)) == floor(log2(cost))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}