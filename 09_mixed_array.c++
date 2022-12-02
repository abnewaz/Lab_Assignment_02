#include <stdio.h>

int is_input(int sz, int* num)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        //scanf("%d", &num[i]);
        scanf("%d", num + i);
    }
}

int is_print(int sz, int* num)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        //printf("%d ", num[i]);
        printf("%d ", *(num + i));
    }
}

int is_prime(int sz, int* num)
{
    int i, j, s = sz;
    for (i = 0; i < sz; i++)
    {
        if (*(num + i) >= 2)
        {
            for (j = 2; j < *(num + i); j++)
            {

                if (*(num + i) == 2)
                {
                }
                else if (*(num + i) % j == 0 && *(num + i) != 2)
                {
                    s = s - 1;
                    break;
                }
            }
        }
        else{
            s--;
        }
    }
    return s;
}

float is_even_avg(int sz, int* num)
{
    int i, sum=0, counter=0;
    float avg=0; 
    for(i=0; i<sz; i++)
    {
        if(*(num + i)%2 == 0)
        {
            sum += *(num + i);
            counter++;
        }
    }
    avg = sum/counter;
    return avg;
}
int main()
{
    int n, prime, even;
    float avg;
    scanf("%d", &n);
    int numbers[n];
    is_input(n, numbers);
    //is_print(n, numbers);
    prime = is_prime(n, numbers);
    printf("Prime numbers: %d", prime);
    avg = (float)is_even_avg(n, numbers);
    printf("\nAverage of all positive integers: %.2f", avg);
    return 0;
}