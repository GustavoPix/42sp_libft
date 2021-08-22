/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:30:18 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/20 18:30:18 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int	ft_isprint(int c);

void	test_isprint(void)
{
	int		i;
	int		r_ori;
	int		r_cus;

	i = -255;
	while (i < 255)
	{
		r_ori = isprint(i);
		r_cus = ft_isprint(i);
		if (r_ori != r_cus)
		{
			printf("ft_isprint: KO! ");
			printf("sended %d and expected %d, got %d", i, r_ori, r_cus);
			break ;
		}
		i++;
	}
	if (i == 255)
		printf("ft_isprint: OK!");
}
