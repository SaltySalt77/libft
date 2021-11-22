/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:36:44 by hyna              #+#    #+#             */
/*   Updated: 2021/11/16 19:03:02 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	unsigned char	*result;
	size_t			pos;

	pos = 0;
	result = (unsigned char *) malloc(count * size);
	if (result == NULL)
		return (NULL);
	while (pos < count)
		result[pos++] = 0;
	return (result);
}