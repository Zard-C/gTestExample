#include "Example.hpp"
#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    int sum = 0;
    int result = MAC(a, b, sum);
    printf("result = %d\n", result); // result = 6
    return 0;
}