/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:49:09 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/21 13:49:09 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	si;
	size_t	di;

	si = 0;
	di = 0;
	while (dest[di])
		di++;
	while (src[si] && di < size - 1)
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (di + size);
}
