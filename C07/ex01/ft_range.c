/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:43:41 by rel-fila          #+#    #+#             */
/*   Updated: 2022/08/02 01:44:10 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (NULL);
	i = max - min;
	result = (int *)malloc(sizeof(int) * i);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		result[i] = min++;
		i++;
	}
	return (result);
}
