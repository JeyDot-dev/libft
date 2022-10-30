/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <jsousa-a@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:51:14 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/10/30 13:08:15 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*new;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
	{
		new = malloc(1);
		*new = 0;
		return (new);
	}
	else if (len > ft_strlen(&s[start]))
		new = (char *) malloc(sizeof(*new) * (ft_strlen(&s[start]) + 1));
	else
		new = (char *) malloc(sizeof(*new) * (len + 1));
	if (!new)
		return (new);
	while (i < len && s[start])
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = 0;
	return (new);
}
