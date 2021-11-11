/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:57:22 by hyna              #+#    #+#             */
/*   Updated: 2021/11/11 18:02:32 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (size <= i)
		len = size;
	else
		len = i;
	while (src[j] && (i + 1 < size))
		dst[i++] = src[j++];
	dst[i] = 0;
	while (src[j])
		j++;
	return (len + j);
}