#include<stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    double avg, sum;
    double a[] = {1.4, 251.3, 5123.2, 23., 0.23};
    int n = 5;
    avg_sum(a, n, &avg, &sum);
    printf("avg: %g, sum: %g", avg, sum);
    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++) 
    {
        *sum += a[i];
    }
    *avg = *sum/n;
}