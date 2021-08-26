/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:55:29 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/25 21:13:28 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	**ft_split(char const *s, char c);

static int	applyTest(char *str, char c,int qty)
{
	int		ir;
	int		ib;
	int		iqty;
	int		idb;
	char	**sc;

	ib = 0;
	idb = 0;
	iqty = 0;
	sc = ft_split(str, c);

	while (iqty < qty)
	{
		ir = 0;
		while(str[ib] && str[ib] != c)
		{
			if(str[ib] != sc[iqty][ir])
			{
				printf("ft_split: KO! ");
				printf("Sended *%s* and split at *%c*, expected *", str, c);
				idb = ib - ir;
				while(str[idb] != c)
				{
					printf("%c",str[idb]);
					idb++;
				}
				printf("*, got *%s* in index %d", sc[iqty], iqty);
				return (0);
			}
			ib++;
			ir++;
		}
		iqty++;
	}
	return (1);
}

int	test_split(void)
{
	if (!applyTest("qwe,rty", ',', 2))
		return (0);
	if (!applyTest("a,ab,abc,abcd",',',4))
		return (0);
	if (!applyTest("querty", ' ', 1))
		return (0);
	if (!applyTest(",,,teste", ',', 4))
		return (0);
	printf("ft_split: OK!");
	return (1);
}
