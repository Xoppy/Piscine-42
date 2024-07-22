/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:56:06 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/13 20:21:04 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	j;
	int	temp_value;

	index = 0;
	j = 0;
	while (index < size)
	{
		while (j < size)
		{
			if (tab[j] > tab[index])
			{
				temp_value = tab[index];
				tab[index] = tab[j];
				tab[j] = temp_value;
			}
			j++;
		}
		j = 0;
		index++;
	}
}
