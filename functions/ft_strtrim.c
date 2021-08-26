/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:23 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/25 19:37:32 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
unsigned int	ft_strlen(const char *str);

static int	gc_toRemoveLeft(char const *str, char const *set)
{
	int	i;
	int	iset;

	i = 0;
	iset = 0;
	while (str[i] && str[i] == set[iset])
	{
		i++;
		iset++;
		if (!set[iset])
			iset = 0;
	}
	return (i - iset);
}

static int	gc_toRemoveRight(char const *str, char const *set)
{
	int	i;
	int	iset;

	i = ft_strlen(str) - 1;
	iset = ft_strlen(set) - 1;
	while (str[i] && str[i] == set[iset])
	{
		i--;
		iset--;
		if (iset < 0)
			iset = ft_strlen(set) - 1;
	}
	return (i + (ft_strlen(set) - iset));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	int		lRemove;
	int		rRemove;
	int		i;

	lRemove = gc_toRemoveLeft(s1, set);
	rRemove = gc_toRemoveRight(s1, set);
	i = 0;
	aux = malloc(rRemove - lRemove + 1);
	while (s1[i + lRemove] && i + lRemove < rRemove)
	{
		aux[i] = s1[i + lRemove];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
