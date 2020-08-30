/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 08:45:42 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/11 09:56:05 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		stock_a;
	int		stock_b;

	stock_a = *a;
	stock_b = *b;
	*a = stock_a / stock_b;
	*b = stock_a % stock_b;
}
