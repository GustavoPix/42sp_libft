/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:30:05 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 16:03:53 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n);

static int	applyTest(char *str, int n, int s)
{
	int		i;
	char	*so;
	char	*sc;

	i = 0;
	so = memchr(str, n, s);
	sc = ft_memchr(str, n, s);
	if (so || sc)
	{
		while (so[i] || sc[i])
		{
			if (so[i] != sc[i])
			{
				printf("ft_memchr: KO! ");
				printf("search *%c* in *%s* and n is *%d*, expected *%s*, got *%s*", n, str, s, so, sc);
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	test_memchr(void)
{
	if (!applyTest("Program", 'o', 26))
		return (0);
	if (!applyTest("Do mesmo modo, o consenso sobre a necessidade de", ',', 7))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", '_', 22))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", 's', 30))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", '+', 21))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", '@', 9))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", 'g', 41))
		return (0);
	if (!applyTest("", 'c', 46))
		return (0);
	printf("ft_memchr: OK!");
	return (1);
}
