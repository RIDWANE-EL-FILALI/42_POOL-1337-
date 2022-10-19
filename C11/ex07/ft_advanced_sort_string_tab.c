/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:57:29 by rel-fila          #+#    #+#             */
/*   Updated: 2022/08/10 10:57:38 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	index;
	int	i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && (*cmp)(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		i++;
	}
}
