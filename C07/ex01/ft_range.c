/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:44:43 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/19 11:43:05 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *rge;
	int w;

	if (min >= max)
		return (NULL);
	if ((rge = malloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	w = 0;
	while (min < max)
	{
		rge[w] = min;
		w++;
		min++;
	}
	return (rge);
}

int main ()
{
	int *rge;
	int w;

	rge = ft_range(-10, 10);
	w = 0;
	while(w < 20)
	{
		printf("%d", rge[w]);
		w++;
	}
	return (0);
}
