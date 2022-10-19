/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:12:08 by rel-fila          #+#    #+#             */
/*   Updated: 2022/08/04 19:36:51 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	checkerror(char *str);

int	dig(int nbr, int base_len)
{
	int	i;

	i = 1;
	while (nbr / base_len)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*convert_to(int nbr, char *base_to, int base_len)
{
	char	*res;
	int		size;
	int		i;

	i = 0;
	size = dig(nbr, base_len);
	if (nbr < 0)
		size++;
	res = (char *) malloc(sizeof(char) * size + 1);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
		i = 1;
	}
	res[size--] = '\0';
	while (i <= size)
	{
		res[size--] = base_to[nbr % base_len];
		nbr /= base_len;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec;
	int		bt_len;
	char	*res;

	bt_len = checkerror(base_to);
	if (!checkerror(base_from) || !bt_len)
		return (NULL);
	dec = ft_atoi_base(nbr, base_from);
	res = convert_to(dec, base_to, bt_len);
	return (res);
}
