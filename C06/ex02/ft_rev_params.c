/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:34:07 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/24 16:04:43 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int argc, char **argv)
{
	int w;
	int x;

	w = 0;
	x = argc - 1;
	while (x > 0)
	{
		while (argv[x][w] != '\0')
		{
			ft_putchar(argv[x][w]);
			w++;
		}
		ft_putchar('\n');
		x--;
		w = 0;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
