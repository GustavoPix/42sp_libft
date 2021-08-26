/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima-de <glima-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:02:37 by glima-de          #+#    #+#             */
/*   Updated: 2021/08/26 19:20:27 by glima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*aux;
	int		i;

	aux = ft_strdup(s);
	i = 0;
	if (!aux)
		return (0);
	while (aux[i])
	{
		aux[i] = f(i, aux[i]);
		i++;
	}
	return (aux);
}
