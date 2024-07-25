/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:56:16 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/25 23:26:54 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, &argv[1][i], 1);
				if (argv[1][i + 1] >= 7 && argv[1][i + 1] <= 13 || argv[1][i + 1] >= 32 && argv[1][i + 1] <= 64 || argv[1][i + 1] >= 91 && argv[1][i + 1] <=96 || argv[1][i + 1] >=123 && argv[1][i + 1] <= 126)
				{
					write(1, "\n", 1);
					return (0);
				}
				i++;
			}
			else
				i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
