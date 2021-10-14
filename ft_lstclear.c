/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:49:02 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/14 19:31:42 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nxt;

	tmp = *lst;
	nxt = NULL;
	while (tmp)
	{
		nxt = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = nxt;
	}
	*lst = NULL;
}
