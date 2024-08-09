/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:23:58 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 12:23:24 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	
	while (nb >= i)
	{
		if ((nb % i == 0) && (i != nb))
			return (0);
		i++;
	}
	return (1);
}
