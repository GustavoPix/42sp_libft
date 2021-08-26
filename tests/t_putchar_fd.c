/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putchar_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:49:59 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 19:53:27 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

void test_putchar_fd()
{
	char print[] = "ft_putchar_fd: OK!";
	int i;

	i = 0;
	while(print[i])
	{
		ft_putchar_fd(print[i],1);
		i++;
	}
}
