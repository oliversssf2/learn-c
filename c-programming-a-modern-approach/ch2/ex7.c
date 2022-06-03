#include<stdio.h>

int main(void)
{
    int amount;
    int left;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    int num_20 = amount/20;
    left = amount - 20*num_20;
    int num_10 = left/10;
    left = left - num_10*10;
    int num_5 = left/5;
    left = left-num_5*5;
    int num_1 = left;
    printf("$20 bills: %d\n", num_20);
    printf("$10 bills: %d\n", num_10);
    printf("$5 bills: %d\n", num_5);
    printf("$1 bills: %d\n", num_1);

    return 0;
}