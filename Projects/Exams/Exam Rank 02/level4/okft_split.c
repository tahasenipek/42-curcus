#include <stdio.h>
#include <stdlib.h>

int word_num(char *str)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
            i++;
        while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
            i++;
        c++;
    }
    return (c);
}

int wrdlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0') 
        i++;
    return (i);
}

char    *wordsome(char *str)
{
    int     i;
    int     len;
    char    *string;

    i = 0;
    len = wrdlen(str);
    string = malloc(sizeof(char) * len + 1);
    string[len] = '\0';
    while (i < len)
    {
        string[i] = *str;
        str++;
        i++;
    }
    return (string);
}


void    put_str(char *str, char **s)
{
    int word_index;

    word_index = 0;
    while (*str != '\0')
    {
       s[word_index] = wordsome(str);
       word_index++;
       while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
            str++;
        while (*str == ' ' || *str == '\t' || *str == '\n')
            str++;
    }
}

char    **ft_split(char *str)
{
    int i;
    char **string;

    i = word_num(str);
    string = malloc(sizeof(char *) * i + 1);
    string[i] = NULL;
    put_str(str, string);
    return (string);
}

int main()
{
    char    *s;
    char    **str;
    int     i;

    i = 0;
    s = "adsa taha  jlk  senipek";
    str = ft_split(s);
    while (str[i])
    {
        printf("Str %s\n", str[i]);
        i++;
    }
}