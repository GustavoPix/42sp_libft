/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putstr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:54:46 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 19:59:59 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char *s, int fd);

void test_putstr_fd()
{
	char print[] = "ft_putstr_fd: OK!";
	ft_putstr_fd(print,1);
}
