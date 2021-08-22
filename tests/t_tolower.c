/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:43:38 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 10:44:26 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int	ft_tolower(int ch);

void	test_tolower(void)
{
	int		i;
	int		r_ori;
	int		r_cus;

	i = -255;
	while (i < 255)
	{
		r_ori = tolower(i);
		r_cus = ft_tolower(i);
		if (r_ori != r_cus)
		{
			printf("ft_tolower: KO! ");
			printf("Sended %d and expected %d, got %d", i, r_ori, r_cus);
			break ;
		}
		i++;
	}
	if (i == 255)
		printf("ft_tolower: OK!");
}
