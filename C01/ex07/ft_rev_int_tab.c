/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 14:55:12 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/11 10:22:11 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int change;

	a = 0;
	while (a < size / 2)
		change = tab[size - 1 - a];
	tab[size - a - 1] = tab[a];
	tab[a] = change;
	a++;
}
