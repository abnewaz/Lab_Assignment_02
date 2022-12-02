#include <stdio.h>

void is_input(int t, int N[])
{
    int i;
    for (i = 0; i < t; i++)
    {
        scanf("%d", &N[i]);
    }
}

void is_print(int t, int N[])
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("%d", N[i]);
    }
}
void is_sum_of_consecutive_even(int n, int number[])
{
    int num, i, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i <= 6; i += 2) // 0 1 2 3
        {
            num = (number[j] / 4) - 3;
            num += i;
            printf("%d ", num); // 22 24 26 28
        }
        printf("\n");
    }
}
int main()
{
    int T, i;
    scanf("%d", &T);
    int N[T];
    is_input(T, N);
    is_sum_of_consecutive_even(T, N);

    return 0;
}