/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strjoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:09:12 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/24 19:48:57 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2);

static int	applyTest(char *str, char *str2)
{
	int		i1;
	int		i2;
	char	*sc;

	i1 = 0;
	i2 = 0;
	sc = ft_strjoin(str, str2);

	while (str[i1])
	{
		if (str[i1] != sc[i1])
		{
			printf("ft_strjoin: KO! ");
			printf("Sended *%s* and *%s*, expected *%s%s*, got *%s*", str, str2, str, str2, sc);
			return (0);
		}
		i1++;
	}
	while (str2[i2])
	{
		if (str2[i2] != sc[i1])
		{
			printf("ft_strjoin: KO! ");
			printf("Sended *%s* and *%s*, expected *%s%s*, got *%s*", str, str2, str, str2, sc);
			return (0);
		}
		i1++;
		i2++;
	}
	if (sc[i1])
	{
		printf("ft_strjoin: KO! forgot null byte in last index");
	}

	return (1);
}

int	test_strjoin(void)
{
	if (!applyTest("Program", "TQk7`jXl0"))
		return (0);
	if (!applyTest("Do mesmo modo,o consenso sobre a necessidade de", "RbZF="))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", "w/}p1SSK;R5n@gj3"))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", "XW|N`9h.kN"))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", "#,d)ka}vB;8^K0.R^5"))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", "(!]{Qh1t=3"))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", "./stqb7QUEc"))
		return (0);
	printf("ft_strjoin: OK!");
	return (1);
}
