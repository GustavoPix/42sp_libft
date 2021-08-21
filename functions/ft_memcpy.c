/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:47:06 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/20 20:47:06 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*pd;
	char			*ps;

	i = 0;
	pd = (char *)dest;
	ps = (char *)src;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}
