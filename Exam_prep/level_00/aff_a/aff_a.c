/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:32:09 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/25 18:35:30 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
			j++;
		i++;
	}
	if (argc != 2 || j != 0)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}
