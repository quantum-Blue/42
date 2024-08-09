/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:45:50 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 14:36:58 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		if (power == 0)
		{
			return (result);
		}
	}
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		while (power < 0)
		{
			result /= nb;
			power++;
		}
	}
	return (result);
}

#include <stdio.h>
int main(){
	printf("%d",ft_iterative_power(3,-2));
}