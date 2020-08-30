/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:25:03 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/11 12:18:21 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		a;
	int		b;
	int		change;

	a = 0;
	b = 0;
	while (b < size && a < size)
	{
		if (tab[a] < tab[b])
		{
			change = tab[a];
			tab[a] = tab[b];
			tab[b] = change;
		}
		b++;
	}
	a++;
}
