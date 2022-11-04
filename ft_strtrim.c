/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:57:12 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/11/04 17:46:43 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int		ft_check(char c, char const *set)
{
	int		flag;
	size_t	i;
	flag = 0;
	while(set[i])
	{
		if (c == set[i])
			flag = 1;
		i++;
	}
	if (flag == 1)
		return (1);
	else
		return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t size;
	char	*str;

	j = strlen(s1); //TODO Change to ft_strlen
	i = 0;
	if (j > 0)
		j--;
	while (j > 0 && ft_check(s1[j], set) == 1)
		j--;
	while (s1[i] && ft_check(s1[i], set) == 1)
		i++;
	size = j - i + 1;
	str = malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		*str = s1[i];
		str++;
		i++;
	}
	*str = 0;
	return (str);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("\n%s", ft_strtrim(av[1], av[2]));
}
