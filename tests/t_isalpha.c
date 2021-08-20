/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:04:57 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/19 20:04:57 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int	ft_isalpha(int c);

void	test_isalpha(void)
{
	int		i;
	int		r_ori;
	int		r_cus;

	i = -255;
	while (i < 255)
	{
		r_ori = isalpha(i);
		r_cus = ft_isalpha(i);
		if (r_ori != r_cus)
		{
			printf("ft_isalpha: KO! ");
			printf("KO! sended %d and expected %d, got %d", i, r_ori, r_cus);
			break ;
		}
		i++;
	}
	if (i == 255)
		printf("ft_isalpha: OK!");
}
