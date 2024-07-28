/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-marc <adi-marc@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:21:01 by adi-marc          #+#    #+#             */
/*   Updated: 2024/07/24 23:54:40 by adi-marc         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
// int main() {
//     // Test cases
//     printf("ft_find_next_prime(3) = %d (Expected: 3)\n",
// 	ft_find_next_prime(3));
//     printf("ft_find_next_prime(4) = %d (Expected: 5)\n",
// 	ft_find_next_prime(4));
//     printf("ft_find_next_prime(10) = %d (Expected: 11)\n",
// 	ft_find_next_prime(10));
//     printf("ft_find_next_prime(17) = %d (Expected: 17)\n",
// 	ft_find_next_prime(17));
//     printf("ft_find_next_prime(18) = %d (Expected: 19)\n",
// 	ft_find_next_prime(18));
//     printf("ft_find_next_prime(0) = %d (Expected: 2)\n",
// 	ft_find_next_prime(0));
//     printf("ft_find_next_prime(1) = %d (Expected: 2)\n",
// 	ft_find_next_prime(1));
//     printf("ft_find_next_prime(23) = %d (Expected: 23)\n",
// 	ft_find_next_prime(23));
//     printf("ft_find_next_prime(24) = %d (Expected: 29)\n",
// 	ft_find_next_prime(24));
//     printf("ft_find_next_prime(-5) = %d (Expected: 2)\n",
// 	ft_find_next_prime(-5));
//     return (0);
// }
