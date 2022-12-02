#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int sz, char num[])
{
    int i, j, a, b, temp;
    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz - 1; j++)
        {
            if (num[j] < num[j + 1])
            {
                swap(&num[j], &num[j + 1]);
            }
        }
    }
}
int main()
{
    int n = 100, sz;
    char str_input[n];
    scanf("%s", str_input);
    sz = strlen(str_input);
    sort(sz, str_input);
    printf("%s", str_input);
    return 0;
}