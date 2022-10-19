/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:21:25 by rel-fila          #+#    #+#             */
/*   Updated: 2022/08/01 14:42:55 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb > 0)
	{
		while (sqr <= 46360)
		{
			if (ft_power(sqr, 2) == nb)
				return (sqr);
			sqr++;
		}
	}
	return (0);
}
