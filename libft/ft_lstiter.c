#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while(lst->next)
	{
		(*f)(lst->);
		lst = lst->next;
	}
}
