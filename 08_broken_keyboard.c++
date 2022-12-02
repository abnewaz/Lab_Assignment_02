#include<stdio.h>
#include<string.h>

void is_word(int sz, char word[])
{
    int i;
    for(i=0; i<sz; i++)
    {
        if(i%2 == 0)
        {
            printf("%c",word[i]);
        }
        else if(i%2 == 1)
        {
            printf("%c%c",word[i],word[i]);
        }
    }
}
int main()
{
    int size;
    char str_input[100];
    scanf("%s",&str_input);
    //printf("%s",str_input);
    size = strlen(str_input);
    //printf("%d",size);
    is_word(size, str_input);
    return 0;
}