/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 23:51:47 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/25 23:47:32 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while(str[l] != '\0')
		l++;
	return (l);
}

char	*ft_copy(char *lasttxt, char **strs, char *sep, int size)
{
	int w;
	int n1;
	int n2;

	n1 = 0;
	w = 0;
	while (n1 <size)
	{
		n2 = 0;
		while (strs[n1][n2])
			lasttxt[w++] = strs[n1][n2++];
		n2 = 0;
		while (sep[n2] && n1 != size - 1)
			lasttxt[w++] = sep[n2++];
		n1++;
	}
	lasttxt[w] = '\0';
	return (lasttxt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *lasttxt;
	int len_all;
	int w;

	lasttxt = NULL;
	w = 0;
	while (w < size)
	{
		if (strs[w] == NULL)
			return (NULL);
        len_all = ft_strlen(strs[w]) + ft_strlen(sep);
		w++;
	}
	if (!(lasttxt = malloc(sizeof(char) * (len_all + 1))))
		return (NULL);
	if (size == 0)
		return (lasttxt);
	lasttxt = ft_copy(lasttxt, strs, sep, size);
	return (lasttxt);
}

int main (int argc, char **argv )
{
	char *sep = " || ";
	printf("%s", ft_strjoin(argc, argv, sep));
}
