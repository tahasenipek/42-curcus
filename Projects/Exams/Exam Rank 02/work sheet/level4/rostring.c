#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	word_count(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while(str[i])
	{
		while(str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			i++;
		while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		c++;
	}
	return (c);
}

int	word_len(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
		i++;
	return(i);
}

char	*word_put(char *str)
{
	int		len;
	char	*s;
	int		i;

	i = 0;
	len = word_len(str);
	s = malloc(sizeof(char) * len + 1);
	s[len] = '\0';
	while (i < len)
	{
		s[i] = *str;
		str++;
		i++;
	}
	return (s);
}

char	**putting_str(char **string, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		string[i] = word_put(str);

		i++;
		while (*str != '\n' && *str != '\t' && *str != ' ' && *str != '\0')
			str++;
		while (*str == '\n' || *str == ' ' || *str == '\t')
			str++;
	}
	return (string);
}

char	**ft_split(char *str)
{
	int		len;
	char	**string;

	len = word_count(str);
	string = malloc(sizeof(char *) * len + 1);
	string[len] = NULL;
	string = putting_str(string, str);
	return (string);
}

void	rostring(char **string)
{
	int		i;
	int		c;
	char	*s;

	c = 0;
	i = 1;
	while (string[i] != NULL)
	{
		while (string[i][c])
		{
			write(1, &string[i][c], 1);
			c++;
		}
		write(1, " ", 1);
		c = 0;
		i++;
	}
	c = 0;
	while (string[0][c])
	{
		write(1, &string[0][c], 1);
		c++;
	}
}

int	main(int ac, char **av)
{
	char	**s;
	int		i;

	i = 0;
	if (ac == 2)
	{
		s = ft_split(av[1]);
		rostring(s);
	}
	write(1, "\n", 1);
}