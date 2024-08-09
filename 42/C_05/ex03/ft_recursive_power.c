/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:49:25 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 11:07:29 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// hata
int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power < 0)
	{
		return (nb * ft_recursive_power(nb, power + 1));
	}
}
