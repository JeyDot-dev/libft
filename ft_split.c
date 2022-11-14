/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:37:39 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/11/14 18:23:44 by jsousa-a         ###   ########.fr       */
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
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (ct);
}

size_t	ft_lenct(char const *s, char c, int i)
{
	int	ct;

	ct = 0;
	if (c == 0 || !s[i])
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
	if (!s)
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
// "////popi/popi/"
/*int	main(void)
{
	int		i;
	char	**lel;
	lel = ft_split("\0aa\0bbb", '\0');
	i = 0;
	while (lel[i])
	{
		printf("\n s %i : %s", i, lel[i]);
		i++;
	}
	printf("\n s %i : %s", i, lel[i]);
}
*/
/*int	main(int ac, char **av)
{
	(void) ac;
 	size_t	i;
	char	**lol;
	lol = ft_split(av[1], av[2][0]);
	i = 0;
	while (i <= ft_ct(av[1], av[2][0]))
	{
		printf("str %li : %s\n", i, lol[i]);
		i++;
	}
}*/

/*int main(void)
{
    // test FINAL

    char    str[] = "..Macron..e.st.un.pedo.sataniste";
    char    str2[] = "hello!";
    char    c = '.';
    char    c1 = ' ';
    size_t    i = 0;
    size_t    j = 0;
    char    **ptrptrs;
    char    **ptrptrs2;

    ptrptrs = ft_split(str, c);
    printf("Voici ce que output ft_split normal:\n\n");
    while (ptrptrs[i] != NULL)
    {
        printf("%s\n", ptrptrs[i]);

        i++;
    }
//    printf("%s\n\n", ptrptrs[i]);
    printf("Voici ce que output ft_split BUGGE:\n\n");
    ptrptrs2 = ft_split(str2, c1);
    while (ptrptrs2[j] != NULL)
    {
        printf("%s\n", ptrptrs2[j]);

        j++;
    }
//    printf("%s\n", ptrptrs2[j]);
}*/
