/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:55:06 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/25 21:21:45 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

char	**gc_allocateArr(size_t qty)
{
	return ((char **)malloc(qty * sizeof(char *)));
}

char	**gc_countAndAlloc(char const *s, char c, size_t qty)
{
	char	*aux;
	char	**mat;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s[size])
	{
		if (s[size] == c)
			break ;
		size++;
	}
	aux = malloc(size + 1);
	ft_memcpy(aux, &s[i], size);
	aux[size] = '\0';
	if (s[size])
		mat = gc_countAndAlloc(&s[size + 1], c, qty + 1);
	else
		mat = gc_allocateArr(qty + 1);
	mat[qty] = aux;
	return (mat);
}

char	**ft_split(char const *s, char c)
{
	return (gc_countAndAlloc(s, c, 0));
}
