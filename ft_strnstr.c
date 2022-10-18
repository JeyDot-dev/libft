/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <jsousa-a@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:59:31 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/10/18 17:43:41 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *big, const char *little)
{
	while (*big == *little && little)
	{
		big++;
		little++;
	}
	if (little)
		return (0);
	else
		return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*bigc;

	bigc = (char *) big;
	i = 0;
	if (!*little)
		return (bigc);
	while ((bigc[i] && i + 1 < len) || i == 0)
	{
		if (bigc[i] == little[0])
		{
			if (ft_check(&bigc[i], little))
				return (&bigc[i]);
		}
		i++;
	}
	return (NULL);
}
