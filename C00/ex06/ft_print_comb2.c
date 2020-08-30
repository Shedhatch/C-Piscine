/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:13:27 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/09 12:27:32 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb)
{
	int nb1;
	int nb2;

	nb1 = nb / 10 + 48;
	nb2 = nb % 10 + 48;
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int d;
	int c;

	d = 0;
	c = 0;
	while (d <= 99)
	{
		c = d + 1;
		while (c <= 99)
		{
			print_number(d);
			write(1, " ", 1);
			print_number(c);
			if (!(d == 98 && c == 99))
			{
				write(1, ", ", 2);
			}
			c++;
		}
		d++;
	}
}
