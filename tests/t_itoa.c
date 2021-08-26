/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:15:18 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 18:53:03 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str);
char	*ft_itoa(int n);

static int	applyTest(char *str)
{
	int		so;
	int		i;
	char	*sc;

	so = ft_atoi(str);
	sc = ft_itoa(so);
	i = 0;
	while (str[i])
	{
		if (str[i] != sc[i])
		{
			printf("ft_itoa: KO! ");
			printf("sended *%d*, expected *%s*, got *%s*", so, str, sc);
			return (0);
		}
		i++;
	}
	return (1);
}

int	test_itoa(void)
{
	if (!applyTest("1234"))
		return (0);
	if (!applyTest("-123123"))
		return (0);
	if (!applyTest("-1"))
		return (0);
	if (!applyTest("1"))
		return (0);
	if (!applyTest("-123"))
		return (0);
	if (!applyTest("123"))
		return (0);
	if (!applyTest("-2147483648"))
		return (0);
	if (!applyTest("2147483647"))
		return (0);
	printf("ft_itoa: OK!");
	return (1);
}
