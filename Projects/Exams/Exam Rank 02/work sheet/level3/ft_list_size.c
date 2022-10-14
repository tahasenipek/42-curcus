#include <stdio.h>
#include <unistd.h>
#include "ft_list.h"

int	ft_list_size(t_list *beginlist)
{
	if (beginlist == 0)
		return (0);
	else
		return(ft_list_size(beginlist->next) + 1);
}