/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:52:37 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/24 13:40:21 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	if (argv[0])
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
}
