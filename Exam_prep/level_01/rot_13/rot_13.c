/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:49:10 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/25 22:55:45 by adi-marc         ###   ########.fr       */
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

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				{
					ft_putchar(argv[1][i] - 13);
				}
				else
				{
					ft_putchar(argv[1][i] + 13);
				}
				i++;
			}
			else
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	return (0);
}
