/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:29:46 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/10 20:48:15 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function that display the alphabet using their ASCII values
// Loops from 97 to 122 and write the appropriate letter each time
void	ft_print_alphabet(void)
{
	char	ascii_start;

	ascii_start = 97;
	while (ascii_start < 123)
	{
		write(1, &ascii_start, 1);
		ascii_start++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
