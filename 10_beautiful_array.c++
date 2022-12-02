#include <stdio.h>

int is_input(int sz, int *num)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        // scanf("%d", &num[i]);
        scanf("%d", num + i);
    }
}

int is_print(int sz, int *num)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        // printf("%d ", num[i]);
        printf("%d ", *(num + i));
    }
}

int check_seven(int n, int *num)
{
    int i, j, m, counter = 0;
    for (i = 0; i < n; i++)
    {
        while (*(num + i) > 0)
        {
            j = *(num + i) % 10;
            if (j == 7)
            {
                counter++;
                break;
            }
            else
            {
                *(num + i) /= 10;
            }
        }
    }
    return counter;
}

void is_beautiful(int n, int *num)
{
    int i, j, m, counter = 0;
    if (n % 2 == 0)
    {
        m = n / 2;
    }
    else if (n % 2 == 1)
    {
        m = (n / 2) + 1;
    }
    j = check_seven(n, num);
    //printf("\n..........%d..........\n",j);
    if(m <= j)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
}

int main()
{
    int n, seven;
    scanf("%d", &n);
    int numbers[n];
    is_input(n, numbers);
    is_beautiful(n, numbers);
    return 0;
}