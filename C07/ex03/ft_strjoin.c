/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:05:38 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/28 13:31:15 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
// Here I had to use stdlib for malloc, and incrementations like c++ j++ 
// because of line restrictions in functions

int	calculate_total_l(int size, char **strs, char *sep)
{
	int	sep_l;
	int	total_l;
	int	i;
	int	j;

	sep_l = 0;
	total_l = 0;
	i = 0;
	j = 0;
	while (sep[sep_l] != '\0')
		sep_l++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_l++;
			j++;
		}
		i++;
	}
	total_l += sep_l * (size - 1);
	return (total_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		c;
	int		total_l;

	i = 0;
	c = 0;
	total_l = calculate_total_l(size, strs, sep);
	ptr = malloc(total_l + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ptr[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i != size - 1)
			ptr[c++] = sep[j++];
		i++;
	}
	ptr[c] = '\0';
	return (ptr);
}
/*
int main()
{
    char *strs[] = {
        "This is a very long string that should cause issues",
        "Another long string to test the limits of allocation",
        "Yet another string to push the boundaries of the buffer",
        "One more long string to ensure we test thoroughly",
        "Final long string to see if everything is handled properly"
    };
    char *sep = " <--separator--> ";
    char *result = ft_strjoin(5, strs, sep);

    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
	
    return 0;
}
*/
