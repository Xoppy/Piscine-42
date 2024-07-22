/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:49:44 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/10 20:49:09 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ascii_start;

	ascii_start = 48;
	while (ascii_start < 58)
	{
		write (1, &ascii_start, 1);
		ascii_start++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
