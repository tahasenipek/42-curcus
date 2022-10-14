#include <stdio.h>
#include <stdlib.h>

int	word_count(char *s)
{
	int	i = 0;
	int	c = 0;

	while (s[i])
	{
		while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		while (s[i] != '\n' && s[i] != '\t' && s[i] != ' ' && s[i] != '\0')
			i++;
		c++;
	}
	return (c);
}

int	wordlen(char *s)
{
	int	i = 0;

	while (s[i] != '\n' && s[i] != ' ' &&  s[i] != '\t' && s[i] != '\0')
		i++;
	return (i);
}

char *word_puttin(char *s)
{
	int		len = 0;
	char	*str;
	int		c = 0;

	len = wordlen(s);
	str = malloc(sizeof(char)* len + 1);
	str[len] = '\0';
	while (c < len)
	{
		str[c] = *s;
		s++;
		c++;
	}
	return (str);
}

char	**putting_str(char **str, char *s)
{
	int	c = 0;

	while(*s)
	{
		str[c] = word_puttin(s);
		c++;
		while (*s != '\n' && *s != ' ' && *s != '\t' && *s != '\0')
			s++;
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
	}
	return (str);
}


char **ft_split(char *s)
{
	int i;
	char **str;

	i = word_count(s);
	str = malloc(sizeof(char *) * i + 1);
	str[i] = NULL;
	putting_str(str, s);
	return (str);
}


int main()
{
	char **str;
	char *s = "taha senipek can mehmet";
	int i = 0;

	str = ft_split(s);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}