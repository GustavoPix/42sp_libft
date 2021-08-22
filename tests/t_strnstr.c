/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:05:41 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 16:35:56 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len);

static int	applyTest(char *big, char *little, int s)
{
	int		i;
	char	*so;
	char	*sc;

	i = 0;
	so = strnstr(big, little, s);
	sc = ft_strnstr(big, little, s);
	if (so || sc)
	{
		while (so[i] || sc[i])
		{
			if (so[i] != sc[i])
			{
				printf("ft_strnstr: KO! ");
				printf("search *%s* in *%s*, expected *%s*, got *%s*", little, big, so, sc);
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	test_strnstr(void)
{
	if (!applyTest("Program", "o", 26))
		return (0);
	if (!applyTest("Do mesmo modo, o consenso sobre a necessidade de", "modo, o", 7))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", "dEwuyabK", 22))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", "mgnw=", 30))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", "gSCD3tG", 21))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", "", 9))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", "g_", 41))
		return (0);
	if (!applyTest("", "c", 46))
		return (0);
	printf("ft_strnstr: OK!");
	return (1);
}
