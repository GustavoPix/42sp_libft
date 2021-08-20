/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bzero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:08:03 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/20 20:08:03 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	ft_bzero(void *s, unsigned int n);

static int	applyTest(char *str, int n)
{
	char	r_ori[80];
	char	r_cus[80];
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size])
	{
		r_ori[size] = str[size];
		r_cus[size] = str[size];
		size++;
	}
	bzero(r_ori, n);
	ft_bzero(r_cus, n);
	while (i < size)
	{
		if (r_ori[i] != r_cus[i])
		{
			printf("ft_bzero: KO!\n Null is *%d*, ", i);
			printf("sended *%s*, expected *%s*, got *%s*, ", str, r_ori, r_cus);
		}
		i++;
	}
	return (1);
}

int	test_bzero(void)
{
	if (!applyTest("Program", 63))
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
	printf("ft_bzero: OK!");
	return (1);
}
