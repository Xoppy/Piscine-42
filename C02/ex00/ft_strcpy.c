/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:17:06 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/17 23:34:10 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	src_size;

	src_size = 0;
	while (src[src_size])
	{
		dest[src_size] = src[src_size];
		src_size++;
	}
	dest[src_size] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src_string[] = "Test_string";
	char	dest_string[] = "destination_string";

	printf("%s \n", src_string);
	printf("%s \n", dest_string);
	ft_strcpy(dest_string, src_string);
	printf("%s \n", src_string);
	printf("%s \n", dest_string);
}*/
