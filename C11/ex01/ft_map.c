/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:07:32 by rel-fila          #+#    #+#             */
/*   Updated: 2022/08/10 09:08:15 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	*res;
	int	i;

	res = malloc(sizeof(int) * lenght);
	if (!res)
		return (0);
	i = 0;
	while (i < lenght)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
