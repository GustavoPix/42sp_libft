/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:59:45 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/22 12:24:45 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n);

static int	applyTest(char *str, char *str2, int n)
{
	int		i;
	int		so;
	int		sc;

	i = 0;
	so = strncmp(str, str2, n);
	sc = ft_strncmp(str, str2, n);
	if (so != sc)
	{
		printf("ft_strncmp: KO! ");
		printf("Sended *%s* and *%s*, expected *%d*, got *%d*", str, str2, so, sc);
		return (0);
	}

	return (1);
}

int	test_strncmp(void)
{
	if (!applyTest("Program", "G1S*?S5*91~w:6pn0;|6B>KPfO_!mQgsry$4IV<I", 35))
		return (0);
	if (!applyTest("Do mesmo modo, o consenso sobre a necessidade de", "={~YuWhl{NRm?cR|kp7Vy[b`AG-Nz{XBjgwn", 9))
		return (0);
	if (!applyTest("S(sUj~!_4,dEwuyabK)/~ZtJ{'>nUY4oSc6|3z", "vN>D(A#)aiTUQNYgNuV8f/+s$:w>3t.PmxMtTTU}aQ$'A$WEcF+lW<8M9", 12))
		return (0);
	if (!applyTest("r{@F/s^'mjs|;|*mgnw=&m<|+LF{Pip?/tfMDRCyB;jxfPd~w", "kcMu]U^$8+P:fl1kjJ?#[d22R<R+tP0qFN9+VMs", 6))
		return (0);
	if (!applyTest("d&n:~<4dPybu8G1&Qsk(+H7SPn8?#LYOZg*Qbah4GgSCD3tG", "3)-q1z!L:U.vyE#oi!NHG;0S)JU9@*#E6&aJnW^;QaP}", 38))
		return (0);
	if (!applyTest("ct)vxb;cJ+l1+8@*dRgssa:o}1fZtQ1h2x6#7T$qf:aAy", "+48f5[:CxV80JC^?>BNNz#Nl:fZ+N1Orp|Q@v{/VoNCM", 13))
		return (0);
	if (!applyTest("g_M@i3c`E^bX9W^F6LBaCeOsl'BDP(3D-lAczYEkmpe:PYe", "~`zm8;AD68c|e.'ADWC{$@|BZfqh[LjT2Lj", 23))
		return (0);
	if (!applyTest("", "$|.!l7t^uKKZ2Bl^mwESb/NQZ0>I-^fgf+o&Yw9qG)zsXpkvQ", 35))
		return (0);
	printf("ft_strncmp: OK!");
	return (1);
}
