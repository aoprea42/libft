#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlst;
	t_list  *head;

	//nlst = (*f)(lst);
	head = nlst;
	while(lst->next)
	{
		*nlst = *(*f)(lst);
		lst = lst->next;
		nlst = lst;
	}
	return (head);
}
