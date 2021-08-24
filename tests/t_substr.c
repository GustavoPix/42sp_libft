/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_substr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:31:32 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/24 19:00:50 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

static int	applyTest(char *str, int s, int l)
{
	int		i;
	char	*sc;

	i = 0;
	sc = ft_substr(str, s, l);
	while(i < s)
	{
		str++;
		i++;
	}
	i = 0;
	if (str || sc)
	{
		while (i < l)
		{
			if (str[i] != sc[i])
			{
				printf("ft_substr: KO! ");
				printf("Sended *%s* start at *%d* and len is *%d*, expected *%s*, got *%s*", str-s, s, l, str, sc);
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	test_substr(void)
{
	if (!applyTest("Program", 5, 2))
		return (0);
	if (!applyTest("Do mesmo modo,o consenso sobre a necessidade de", 17, 30))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", 22, 13))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", 44, 5))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", 14, 20))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", 15, 23))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", 2, 3))
		return (0);
	printf("ft_substr: OK!");
	return (1);
}
