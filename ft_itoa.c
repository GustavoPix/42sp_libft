/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:15:16 by glima-de          #+#    #+#             */
/*   Updated: 2021/11/18 20:26:34 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*int_to_char(int n, size_t s)
{
	char	*aux;
	int		i;

	i = 0;
	if (n > 9 || n < -9)
		aux = int_to_char(n / 10, s + 1);
	else
	{
		aux = ft_calloc(s + 1, sizeof(char));
		if (!aux)
			return ((void *)0);
	}
	while (aux[i])
		i++;
	if (i == 0 && n < 0)
	{
		aux[0] = '-';
		i++;
	}
	n = (n % 10);
	if (n < 0)
		n *= -1;
	aux[i] = n + '0';
	return (aux);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*aux;

	i = 1;
	if (n < 0)
		i++;
	aux = int_to_char(n, i);
	while (aux[i])
		i++;
	aux[i] = '\0';
	return (aux);
}
