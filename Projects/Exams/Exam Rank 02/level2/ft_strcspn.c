#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    while (s[i])
    {
        while (reject[j])
        {
            if (s[i] == reject[i])
                return (i);
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i])
        i++;
    return(i);
}

int main(void)
{
    char    *s1;
    char    *s2;
    size_t    i;
    int      ii;

    s1 = "ben";
    s2 = "z";
    i = strcspn(s1 , s2);
    ii = ft_strcspn(s1, s2);
    printf("ORGİNAL == %zu  SELF %d\n", i, ii);
}