/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:37:39 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/11/11 15:10:47 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ct(char const *s, char c)
{
	size_t	i;
	size_t	ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		if (s[i] != c)
			ct++;
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
	}
	return (ct);
}

char	**ft_split(char const *s, char c)
{
	char	**strarr;
	size_t	i;

}
int	main(int ac, char **av)
{
	void 
	printf("%i", ft_split(av[1], av[2]));

}
