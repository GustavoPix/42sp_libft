/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:30:03 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 16:03:28 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)str;
	while (i < n)
	{
		if (aux[i] == c)
			return ((void *)&aux[i]);
		i++;
	}
	return (0);
}
