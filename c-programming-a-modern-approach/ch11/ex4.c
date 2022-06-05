#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i, j;

    printf("Input an integer for i: ");
    scanf("%d", &i);
    printf("Input an integer for j: ");
    scanf("%d", &j);
    
    printf("i before swap: %d, j before swap: %d\n", i, j);
    swap(&i, &j);
    printf("i after swap: %d, j after swap: %d\n", i, j);
    
    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}