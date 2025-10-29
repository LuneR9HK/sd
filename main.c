#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("[%s]", (char *)lst->content);
		if (lst->next)
			printf(" -> ");
		lst = lst->next;
	}
	printf("\n");
}
/*
void	del(void *content)
{
	free(content);
}
*/
void	*ft_lst_upper(void *content)
{
	char	*str;
	
	str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (str);
}

int	main(void)
{	
	//t_list	*list = NULL;
	t_list	*elem1 = ft_lstnew(ft_strdup("Hey"));
	//t_list	*elem2 = ft_lstnew(ft_strdup("Dumb"));
	//t_list	*elem3 = ft_lstnew(ft_strdup("Boy"));

/*
	ft_lstadd_front(&list, elem1);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem3);
*/

	//print_list(list);
	
	//ft_lstadd_back(&elem1, elem2);
	//ft_lstadd_back(&elem1, elem3);
	//ft_lstadd_back(&list, elem3);
	
	//ft_lstclear(&elem1, free);
	//ft_lstdelone(elem3, del);
	
	//ft_lstiteri(elem1, &ft_lst_upper);
	
	t_list *nlst = ft_lstmap(elem1, ft_lst_upper, free);	

	print_list(elem1);
	print_list(nlst);
	ft_lstclear(&nlst, free);
	ft_lstclear(&elem1, free);
	return (0);
}
