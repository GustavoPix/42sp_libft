/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:36 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/24 20:40:49 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set);

static int	applyTest(char *str, char *str2, char *r)
{
	int		i;
	char	*sc;

	i = 0;
	sc = ft_strtrim(str, str2);

	while (r[i] || sc[i])
	{
		if (r[i] != sc[i])
		{
			printf("ft_strtrim: KO! ");
			printf("Sended *%s* and trim argument *%s*, expected *%s*, got *%s*", str, str2, r, sc);
			return (0);
		}
		i++;
	}
	return (1);
}

int	test_strtrim(void)
{
	if (!applyTest("     qwerty     ", " ", "qwerty"))
		return (0);
	if (!applyTest("121212qwerty1212121212","12","qwerty"))
		return (0);
	if (!applyTest("123123qwerty123123123", "123", "qwerty"))
		return (0);
	if (!applyTest("11212qwerty1212", "12", "11212qwerty"))
		return (0);
	if (!applyTest("1212qwerty122", "12", "1212qwerty122"))
		return (0);
	if (!applyTest("123qwe123rty", "123", "qwe123rty"))
		return (0);
	if (!applyTest("111qwert1y111", "1", "qwert1y"))
		return (0);
	printf("ft_strtrim: OK!");
	return (1);
}
