#include <stdio.h>
#include <stdlib.h>

char    *snake_to_camel(char *s)
{
    int     i;
    int     c; 
    char    *temp;

    c = 0;
    i = 0;
    while(s[i])
    {
        if (s[i] =='_')
        {
            i++;
            i--;
        }
        i++;
    }
    temp = malloc(sizeof(char)* i + 1);
    i = 0;
    while (s[i])
    {
        if (s[i] && s[i] != '_')
            temp[c++] = s[i++];
        else if (s[i] == '_')
        {
            temp[c++] = s[++i] - 32;
            i++;
        }
        else
            i++;
    }
    return (temp);
}

int main()
{
    char *s;

    s = "here_is_a_snake_case_word";
    printf("%s\n",snake_to_camel(s));
}