/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:49:38 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/19 20:49:38 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int	ft_isdigit(int c);

void	test_isdigit(void)
{
	int		i;
	int		r_ori;
	int		r_cus;

	i = -255;
	while (i < 255)
	{
		r_ori = isdigit(i);
		r_cus = ft_isdigit(i);
		if (r_ori != r_cus)
		{
			printf("ft_isdigit: KO! ");
			printf("Sended %d and expected %d, got %d", i, r_ori, r_cus);
			break ;
		}
		i++;
	}
	if (i == 255)
		printf("ft_isdigit: OK!");
}
