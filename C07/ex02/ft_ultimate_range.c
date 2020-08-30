/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:09:08 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/19 11:44:32 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *list;
	int w;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if((list = malloc(sizeof(*list) * (max - min))) == NULL)
		return (-1);
	w = 0;
	while (min < max)
	{
		list[w] = min;
		w++;
		min++;
	}
	*range = list;
	return (w);
}

int	main()
{
	int *tab;

	printf("%d\n", ft_ultimate_range(&tab, 60, 12));
	int i = -1;
	while (++i < (6))
		printf("%d\n", tab[i]);
	return (0);
}
