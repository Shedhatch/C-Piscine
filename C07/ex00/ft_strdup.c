/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarricc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 23:11:12 by avarricc          #+#    #+#             */
/*   Updated: 2020/08/19 11:42:08 by avarricc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	ft_strlen(char *src)
{
	int w;

	w = 0;
	while (src[w])
		w++;
	return (w);
}

char *ft_strdup(char *src)
{
	char *other;
	int sz;
	int w;

	sz = ft_strlen(src);
	if((other = malloc(sizeof(*src) * (sz +1))) == NULL)
		return (NULL);
	w = 0;
	while(src[w])
	{
		other[w] = src[w];
		w++;
	}
	other[w] = '\0';
	return (other);
}

#include <stdio.h>
#include <string.h>
int main(void) 
{
	char *str = "hello";
	printf("%p\n" , str);
	printf("%p\n", ft_strdup(str));
	printf("%p\n", str);
	return (0);
}
