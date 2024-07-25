/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 23:55:24 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/25 23:59:54 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		while (len >= 0)
		{
			ft_putchar(argv[1][len]);
			len--;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
