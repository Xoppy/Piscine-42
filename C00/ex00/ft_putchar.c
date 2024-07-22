/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:26:33 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/10 19:36:20 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Creation of the ft_putchar function that will write down it's parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Main function that will take ft_putchar() and assign a parameter to it
/*
int	main(void)
{
	ft_putchar('c');
	return (0);
}
*/
