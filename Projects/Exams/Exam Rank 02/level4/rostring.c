#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
    {
        i++;
    }
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


void    put_str(char *str, char **s, int wrd_cnt)
{
    int word_index;
    int i;

    i = 0;
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
    put_str(str, string, i);
    return (string);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while(str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    char    **str;
    int     i;
    int     c;

    c = 0;
    i = 1;
    if (ac == 2)
    {
        str = ft_split (av[1]);
        while (str[i] != NULL)
        {
           c = ft_strlen(str[i]);
           write(1, str[i], c);
           write(1, " ", 1);
           i++;
        }
        c = ft_strlen(str[0]);
        write (1, str[0], c);
    }
    write(1, "\n", 1);
}