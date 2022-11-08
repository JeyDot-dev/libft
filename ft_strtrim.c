/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:57:12 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/11/08 15:09:01 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
/*int		ft_check(char c, char const *set)
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
}*/
int	ft_start(int i, char const *s1, char const *set)
{
	i = ft_strlen(s1);

	if (i > 0)
		i--;
	while (i > 0 && ft_strchr(set, s1[i]) != NULL)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	j = ft_start(j, s1, set);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	str = malloc(sizeof(*str) * (j - i + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 2);
	return (str);
}

/*int	main(int ac, char **av)
{
	(void) ac;
	printf("\n%s", ft_strtrim(av[1], av[2]));
}*/
