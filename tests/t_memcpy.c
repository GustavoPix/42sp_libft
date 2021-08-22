/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:47:11 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/20 20:47:11 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void *dest, const void *src, unsigned int n);

static int	applyTest(char *str, int n)
{
	char	r_ori[80];
	char	r_cus[80];
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (size < 50)
	{
		r_ori[size] = str[size];
		r_cus[size] = str[size];
		size++;
	}
	memcpy(r_ori, str, n);
	ft_memcpy(r_cus, str, n);
	while (i < size)
	{
		if (r_ori[i] != r_cus[i])
		{
			printf("ft_memcpy: KO!");
			printf("sended *%s*, expected *%s*, got *%s*", str, r_ori, r_cus);
		}
		i++;
	}
	return (1);
}

int	test_memcpy(void)
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
	printf("ft_memcpy: OK!");
	return (1);
}