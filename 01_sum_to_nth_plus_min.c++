#include<stdio.h>

int main()
{
    int i, j, sum=0, sign= -1;
    int N;
    scanf("%d",&N);

    for(i=1; i<=N; i+=3)             
    {
        sign *= -1;                     // sign change
        for(j=i; j<i+3 && j<=N; j++)    // iterator
        {
            sum += j*sign;          
        }
        

    }
    printf("%d",sum);
    return 0;
}