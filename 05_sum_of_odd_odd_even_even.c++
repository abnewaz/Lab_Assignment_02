#include<stdio.h>

void is_input(int t, int N[])
{
    int i;
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &N[i]);
    }
}

void is_print(int t, int N[])
{
    int i;
    for (i = 1; i <= t; i++)
    {
        printf("%d ", N[i]);
    }
}

int is_sum(int sz, int num[])
{
    int i, temp, odd_sum = 0, even_sum = 0, sum =0;
    for(i=1; i<=sz; i++)
    {
        temp =0;
        if((i%2 == 0) && num[i]%2 == 0)
        {
            temp = i + num[i];
            even_sum += temp;
            //printf("%d..........\n",even_sum);
        }
        else if((i%2 == 1) && num[i]%2 == 1)
        {
            temp = i + num[i];
            odd_sum += temp;
            //printf("%d_______\n",odd_sum);
        }
        

    }
    sum = even_sum + odd_sum;
    //printf("total sum is:  %d\n",sum);
    if(sum >0)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, sum;
    scanf("%d",&n);
    int numbers[n];
    is_input(n, numbers);
    //printf("\n");
    //is_print(n, numbers);
    //printf("\n");
    sum = is_sum(n, numbers);
    printf("%d",sum);
    return 0;
}