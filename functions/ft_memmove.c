/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:14:16 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/20 21:14:16 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *destination, const void *source, unsigned int num)
{
	unsigned int	i;
	char			*pd;
	char			*ps;
	char			aux[255];

	i = 0;
	pd = (char *)destination;
	ps = (char *)source;
	while (i < num)
	{
		aux[i] = ps[i];
		i++;
	}
	i = 0;
	while (i < num)
	{
		pd[i] = aux[i];
		i++;
	}
	return (destination);
}
