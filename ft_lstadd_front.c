/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <jsousa-a@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:34:22 by jsousa-a          #+#    #+#             */
/*   Updated: 2022/11/21 00:44:23 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	ft_lstadd_front(t_list **lst, t_list *new)

int	main(void)
{
	t_list	lel;
	t_list	*tst;
	t_list	**tst2;
	char a;
	char *b;

	a = 'e';
	b = &a;
	lel.content = b;
	tst = &lel;
	tst2 = tst->content;


	write(1, lel.content, 1);
	write(1, "\n", 1);
	write(1, tst2, 1);
	write(1, "\n", 1);
	a = 't';
	write(1, lel.content, 1);
	write(1, "\n", 1);
	write(1, tst2, 1);
}
