/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:07:45 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/24 18:04:11 by adi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main() {
//     // Test cases
//     printf("ft_is_prime(2) = %d (Expected: 1)\n", ft_is_prime(2));
//     printf("ft_is_prime(3) = %d (Expected: 1)\n", ft_is_prime(3));
//     printf("ft_is_prime(4) = %d (Expected: 0)\n", ft_is_prime(4));
//     printf("ft_is_prime(5) = %d (Expected: 1)\n", ft_is_prime(5));
//     printf("ft_is_prime(9) = %d (Expected: 0)\n", ft_is_prime(9));
//     printf("ft_is_prime(11) = %d (Expected: 1)\n", ft_is_prime(11));
//     printf("ft_is_prime(13) = %d (Expected: 1)\n", ft_is_prime(13));
//     printf("ft_is_prime(16) = %d (Expected: 0)\n", ft_is_prime(16));
//     printf("ft_is_prime(17) = %d (Expected: 1)\n", ft_is_prime(17));
//     printf("ft_is_prime(19) = %d (Expected: 1)\n", ft_is_prime(19));
//     printf("ft_is_prime(20) = %d (Expected: 0)\n", ft_is_prime(20));
//     printf("ft_is_prime(-1) = %d (Expected: 0)\n", ft_is_prime(-1));
//     printf("ft_is_prime(0) = %d (Expected: 0)\n", ft_is_prime(0));
//     printf("ft_is_prime(1) = %d (Expected: 0)\n", ft_is_prime(1));
//     printf("ft_is_prime(97) = %d (Expected: 1)\n", ft_is_prime(97));
//     printf("ft_is_prime(100) = %d (Expected: 0)\n", ft_is_prime(100));
//     return (0);
// }