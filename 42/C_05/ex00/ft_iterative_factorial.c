/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:28:14 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 10:38:34 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb == 0 || nb == 1)
		return 1;
	else if (nb < 0)
		return 0;
	total = 1;
	while (nb > 1)
	{
		total *= nb ;
		nb--;
	}
	return (total);
}
