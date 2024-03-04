#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	
	list->next = NULL;
	if(!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
	list->content = malloc(content_size);
	if(!list->content)
		return (NULL);
	list->content = content;
	list->content_size = content_size;
	}
	return (list);
}
