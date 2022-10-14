#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *lst_ptr;

	lst_ptr = begin_list;
	while (lst_ptr)
	{
		(*f)(lst_ptr->data);
		lst_ptr = lst_ptr->next;
	}
}