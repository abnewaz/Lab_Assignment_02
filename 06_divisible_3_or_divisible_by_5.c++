#include<stdio.h>

void is_input(int sz, int num[])
{
    int i;
    for (i = 1; i <= sz; i++)
    {
        scanf("%d", &num[i]);
    }
}

void is_print(int sz, int num[])
{
    int i;
    for (i = 1; i <= sz; i++)
    {
        printf("%d ", num[i]);
    }
}

int is_divisible_by_three(int sz, int num[])
{
    int i, counter = 0;
    for(i=0; i<sz; i++)
    {
        if(num[i]%3 == 0)
        {
            counter++;
        }
    }
    return counter;
}

int is_divisible_by_five(int sz, int num[])
{

    int i, counter = 0;
    for(i=0; i<sz; i++)
    {
        if(num[i]%5 == 0 && num[i]%3 !=0)
        {
            counter++;
        }
    }
    return counter;
}

int sum(int sz, int num[])
{
    int add;
    add = is_divisible_by_three(sz, num) + is_divisible_by_five(sz, num);
    if(add > 0)
    {
        return add;
    }
    else
    {
        return -1;
    }
    
}

int main()
{
    int n, add;
    scanf("%d",&n);
    int numbers[n];
    is_input(n, numbers);
    is_print(n, numbers);
    add = sum(n, numbers);
    printf("\n%d",add);

    return 0;
}