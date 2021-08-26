/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putendl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:01:42 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 20:03:04 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putendl_fd(char *s, int fd);

void test_putendl_fd()
{
	char print[] = "ft_putendl_fd: OK!";
	ft_putendl_fd(print,1);
}
