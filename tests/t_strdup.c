/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:10:30 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/23 20:23:26 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strdup(const char *s);

static int	applyTest(char *str)
{
	int		i;
	char	*so;
	char	*sc;

	i = 0;
	so = strdup(str);
	sc = ft_strdup(str);
	if (so || sc)
	{
		while (so[i] || sc[i])
		{
			if (so[i] != sc[i])
			{
				printf("ft_strdup: KO! ");
				printf("Sended *%s*, expected *%s*, got *%s*", str, so, sc);
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	test_strdup(void)
{
	if (!applyTest("Program"))
		return (0);
	if (!applyTest("Do mesmo modo,o consenso sobre a necessidade de"))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z"))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w"))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG"))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy"))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe"))
		return (0);
	if (!applyTest(""))
		return (0);
	printf("ft_strdup: OK!");
	return (1);
}
