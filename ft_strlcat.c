/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:57:22 by hyna              #+#    #+#             */
/*   Updated: 2021/11/17 14:21:47 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = ft_strlen(dst);
	j = 0;
	if (size <= i)
		len = size;
	else
		len = i;
	while (src[j] && (i + 1 < size))
		dst[i++] = src[j++];
	if (i != ft_strlen(dst))
		dst[i] = 0;
	return (len + ft_strlen(src));
}
