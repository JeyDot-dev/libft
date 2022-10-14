/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:40:58 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/10/14 14:42:48 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* size_t = str + \0, guarantees \0 if there's room.
 * copies dstsize -1 from src to dst. \0 if dstsize > 0.
 * appends SRC to end of $DST
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
//	char			*len;

//	len = dst;
	i = 0;
	if (ft_strlen(src) > dstsize)
	{
		while (*src)
			*dst++ = src[i++];
	}
	else
	{
		while (i + 1 < dstsize)
			*dst++ = src[i++];
	}
	if (dstsize)
		dst[i] = 0;
	return (strlen(src));
}
