/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:50:29 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/14 19:47:58 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*num;

	num = malloc(sizeof(*num));
	if (!num)
		return (NULL);
	num[0].content = content;
	num[0].next = NULL;
	return (num);
}
