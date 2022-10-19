/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:30:17 by rel-fila          #+#    #+#             */
/*   Updated: 2022/08/01 14:18:23 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
