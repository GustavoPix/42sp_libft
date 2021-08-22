/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_strlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:23:49 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/21 09:23:49 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

static void	copy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static int	applyTest(char *str, int n)
{
	char	r_ori[80];
	char	r_cus[80];
	int		i;
	int		so;
	int		sc;

	i = 0;
	copy(str, r_ori);
	copy(str, r_cus);
	so = strlcpy(r_ori, str, n);
	sc = ft_strlcpy(r_cus, str, n);
	while (r_cus[i] || r_ori[i])
	{
		if (r_cus[i] != r_ori[i] || so != sc)
		{
			printf("ft_strlcpy: KO! ");
			printf("sended *%s*, expected *%s*, got *%s*", str, r_ori, r_cus);
			printf(" sizeof expected *%d*, got *%d*", so, sc);
			return (0);
		}
		i++;
	}
	return (1);
}

int	test_strlcpy(void)
{
	if (!applyTest("Program", 7))
		return (0);
	if (!applyTest("Do mesmo modo, o consenso sobre a necessidade de", 16))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", 2))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", 1))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", 42))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", 24))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", 8))
		return (0);
	if (!applyTest("", 78))
		return (0);
	printf("ft_strlcpy: OK!");
	return (1);
}
