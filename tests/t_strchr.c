/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:50:48 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 16:29:18 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c);

static int	applyTest(char *str, int n)
{
	int		i;
	char	*so;
	char	*sc;

	i = 0;
	so = strchr(str, n);
	sc = ft_strchr(str, n);
	if (so || sc)
	{
		while (so[i] || sc[i])
		{
			if (so[i] != sc[i])
			{
				printf("ft_strchr: KO! ");
				printf("search *%c* in *%s*, expected *%s*, got *%s*", n, str, so, sc);
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	test_strchr(void)
{
	if (!applyTest("Program", 'o'))
		return (0);
	if (!applyTest("Do mesmo modo, o consenso sobre a necessidade de", ','))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", '_'))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", 's'))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", '+'))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", '@'))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", 'g'))
		return (0);
	if (!applyTest("", 'c'))
		return (0);
	printf("ft_strchr: OK!");
	return (1);
}
