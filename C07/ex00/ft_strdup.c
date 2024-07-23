/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:27:04 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/23 20:35:49 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *) malloc(sizeof(char) * (strlen(src) + 1));
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	string[] = "Hello";
	printf("%s",ft_strdup(string));
	return (0);
}*/
