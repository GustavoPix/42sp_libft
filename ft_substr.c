/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:31:11 by glima-de          #+#    #+#             */
/*   Updated: 2021/09/04 12:04:38 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = malloc(len + 1);
	if (aux)
	{
		while (s[i + start] && i < len)
		{
			aux[i] = s[i + start];
			i++;
		}
		while (i <= len)
		{
			aux[i] = '\0';
			i++;
		}
		return (aux);
	}
	else
		return (NULL);
}
