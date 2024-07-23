/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:05:38 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/23 20:41:18 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	ptr = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			ptr[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != 0 && i != size - 1)
		{
			ptr[c++] = sep[j++];
		}
		i++;
	}
	ptr[c] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"hello", "salut", "ok", "git gud"};
	char	sep[] = ",";
	printf("%s", ft_strjoin(4, strs, sep));
}*/
