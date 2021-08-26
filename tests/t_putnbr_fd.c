/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putnbr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:05:42 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 20:13:18 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_putnbr_fd(int n, int fd);
void	test_putnbr_fd(void)
{
	printf("ft_putnbr_fd:\n");
	ft_putnbr_fd(1234,1);
	printf("\n");
	ft_putnbr_fd(-123123,1);
	printf("\n");
	ft_putnbr_fd(-1,1);
	printf("\n");
	ft_putnbr_fd(1,1);
	printf("\n");
	ft_putnbr_fd(-123,1);
	printf("\n");
	ft_putnbr_fd(123,1);
	printf("\n");
	ft_putnbr_fd(-2147483648,1);
	printf("\n");
	ft_putnbr_fd(2147483647,1);
	printf("\n");
	printf("ft_putnbr_fd: OK!");
}
