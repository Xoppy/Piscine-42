/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:54:52 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/17 23:45:48 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*capitalize_first_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lower(str);
	i = 1;
	capitalize_first_letter(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 91 && str[i] <= 96))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] >= 58 && str[i] <= 64 || str[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] >= 7 && str[i] <= 13)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
// Include your ft_strcapitalize function here

int main() {

    // Test 2: Only lowercase letters
    char test2[] = " hello world";
    printf("\nOriginal: %s\n", test2);
    ft_strcapitalize(test2);
    printf("Modified: %s\n", test2);

    // Test 3: Only uppercase letters
    char test3[] = "HELLO WORLD";
    printf("\nOriginal: %s\n", test3);
    ft_strcapitalize(test3);
    printf("Modified: %s\n", test3);

    // Test 4: Mixed case but not starting with a letter
    char test4[] = "Hello World!";
    printf("\nOriginal: %s\n", test4);
    ft_strcapitalize(test4);
    printf("Modified: %s\n", test4);

    // Test 5: Starting with a letter followed by other letters
    char test5[] = "helloWorld";
    printf("\nOriginal: %s\n", test5);
    ft_strcapitalize(test5);
    printf("Modified: %s\n", test5);

    // Test 6: Special characters and numbers
    char test6[] = "hello@world.com";
    printf("\nOriginal: %s\n", test6);
    ft_strcapitalize(test6);
    printf("Modified: %s\n", test6);

    return 0;
}*/
