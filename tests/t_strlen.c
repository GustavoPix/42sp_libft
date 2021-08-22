/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:36:25 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/20 18:36:25 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(const char *str);

static int	applyTest(char *str)
{
	int		r_ori;
	int		r_cus;

	r_ori = strlen(str);
	r_cus = ft_strlen(str);
	if (r_cus != r_ori)
	{
		printf("ft_strlen: KO! ");
		printf("sended **%p** and expected %d, got %d", str, r_ori, r_cus);
		return (0);
	}
	return (1);
}

int	test_strlen(void)
{
	if (!applyTest("Program"))
		return (0);
	if (!applyTest("Do mesmo modo, o consenso sobre a necessidade de "))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z"))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w"))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG9PxZAmR"))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy"))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYeUtpai"))
		return (0);
	if (!applyTest(""))
		return (0);
	printf("ft_strlen: OK!");
	return (1);
}
