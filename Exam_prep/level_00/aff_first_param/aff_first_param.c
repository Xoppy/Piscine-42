/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:15:55 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/25 20:25:56 by adi-marc         ###   ########.fr       */
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
	int	arg_c;

	i = 0;
	arg_c = argc;
	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		return (0);
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
}
