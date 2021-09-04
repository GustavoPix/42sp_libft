/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:31:11 by glima-de          #+#    #+#             */
/*   Updated: 2021/09/04 13:13:46 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	if (start + len > ft_strlen(s))
		len = len - (ft_strlen(s) - (start + len));
	aux = malloc((len + 1) * sizeof(char));
	if (aux)
	{
		while (i < len)
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
