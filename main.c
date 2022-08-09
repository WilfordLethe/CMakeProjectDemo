#include "stdio.h"
#include "mathlib.h"

int main(void)
{
    printf("Please input 2 integers:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a+b=%d\n", addufun(a, b));
    return 0;
}
