/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:37:39 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/11/11 21:03:55 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ct(char const *s, char c)
{
	size_t	i;
	size_t	ct;

	i = 0;
	ct = 0;
	if (c == 0)
		return (1);
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
size_t	ft_lenct(char const *s, char c, int i)
{
	int	ct;

	ct = 0;
	if (c == 0)
		return (ft_strlen(s));
	while (s[i] != c && s[i])
	{
		i++;
		ct++;
	}
	return (ct);
}
char	**ft_split(char const *s, char c)
{
	char	**strarr;
	size_t	i;
	size_t	j;
	size_t	jj;
	size_t	strct;

	i = 0;
	jj = 0;
	if (s == NULL)
		return (NULL);
	strct = ft_ct(s, c);
	strarr = malloc(sizeof(*strarr) * (strct + 1));
	if (!strarr)
		return (NULL);
	while (i < strct)
	{
		j = 0;
		while (s[jj] && s[jj] == c)
			jj++;
		strarr[i] = malloc(sizeof(**strarr) * (ft_lenct(s, c, jj) + 1));
		while (s[jj] && s[jj] != c)
		{
			strarr[i][j] = s[jj];
			j++;
			jj++;
		}
		strarr[i][j] = 0;
		i++;
	}
	strarr[i] = NULL;
	return (strarr);
}
int	main(int ac, char **av)
{
	(void) ac;
	size_t	i;
	i = 0;
	while (i <= ft_ct(av[1], av[2][0]))
	{
		printf("str %li : %s\n", i, ft_split(av[1], av[2][0])[i]);
		i++;
	}
}
