/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:53:21 by hyna              #+#    #+#             */
/*   Updated: 2021/11/24 16:02:06 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		tmp = *lst;
		tmp->next = new;
	}
	*lst = new;
}
