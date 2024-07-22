/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:26:26 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/14 17:54:39 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	string_lenght;

	string_lenght = 0;
	while (str[string_lenght])
	{
		string_lenght++;
	}
	write(1, str, string_lenght);
}
