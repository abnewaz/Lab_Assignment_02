#include<stdio.h>

void is_input(int sz, int num[])
{
    int i;
    for(i=0; i<sz; i++)
    {
        scanf("%d",&num[i]);
    }
}

void is_print(int sz, int num[])
{
    int i;
    for(i=0; i<sz; i++)
    {
        printf("%d ",num[i]);
    }
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void is_test_input(int test_case, int test_L_R[][2])
{
    int i, j;
    for(i=0; i<test_case; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&test_L_R[i][j]);
        }
        
    }
}

void is_test_print(int test_case, int test_L_R[][2])
{
    int i, j;
    for(i=0; i<test_case; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",test_L_R[i][j]);
        }
        printf("\n");
    }
}
void is_swapping(int sz, int num[], int Q, int test_L_R[][2] )          

{
    int i, j, a, b, temp;
    for(i=0; i<Q; i++)                                     // 3 2 5 1
    {
        /* for(j=1; j<=sz; j++)
        {} */
            swap(&num[test_L_R[i][0]-1], &num[test_L_R[i][1]-1]);
        
        
    }
}


int main()
{
    int n,Q,L,R;
    scanf("%d",&n);
    int numbers[n];

    is_input(n, numbers);
    
    scanf("%d",&Q);
    int test_case[Q][2];
    is_test_input(Q, test_case);
    printf("\n");
    is_swapping(n, numbers, Q, test_case);
    is_print(n, numbers);
    return 0;
}