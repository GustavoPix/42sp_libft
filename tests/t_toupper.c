/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_toupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:28:38 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 10:42:30 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int	ft_toupper(int ch);

void	test_toupper(void)
{
	int		i;
	int		r_ori;
	int		r_cus;

	i = -255;
	while (i < 255)
	{
		r_ori = toupper(i);
		r_cus = ft_toupper(i);
		if (r_ori != r_cus)
		{
			printf("ft_toupper: KO! ");
			printf("Sended %d and expected %d, got %d", i, r_ori, r_cus);
			break ;
		}
		i++;
	}
	if (i == 255)
		printf("ft_toupper: OK!");
}
