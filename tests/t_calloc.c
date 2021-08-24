/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:24:36 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/23 21:05:53 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size);

static int	applyTest(char *str)
{
	int		i;
	int		size;
	char	*so;
	char	*sc;
	int		ss;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	so = calloc(sizeof(char), size);
	sc = ft_calloc(sizeof(char), size);
	if (so || sc)
	{
		while (str[i])
		{
			so[i] = str[i];
			sc[i] = str[i];
			i++;
		}
		so[i] = '\0';
		sc[i] = '\0';
		i = 0;
		while (so[i] || sc[i])
		{
			if (so[i] != sc[i])
			{
				printf("ft_calloc: KO! ");
				ss = sizeof(char) * size;
				printf("Allocate *%d* using string *%s*, expected *%s*, got *%s*", ss, str, so, sc);
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	test_calloc(void)
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
	printf("ft_calloc: OK!");
	return (1);
}